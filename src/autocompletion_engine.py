from os import terminal_size
from typing import Dict, List, TypedDict, Union

from bison_xml_reader import RuleMatchInfo, TranslatedLexerTokenInfoWithMatchRule, WordInfo
from name_resolution_utils import get_type_of_name_token_by_match_rule


class WordPos(TypedDict):
    first_line: int
    first_column: int
    last_line: int
    last_column: int


class Pos(TypedDict):
    line: int
    column: int


class Suggestions(TypedDict):
    name_type: List[str]
    terminal_symbol: List[str]


class AutocompletionEngine:
    def reset_variables(self):
        self.stack: List[Union[int,
                               TranslatedLexerTokenInfoWithMatchRule]] = [0]
        self.cur_word_index = 0
        self.final_tokens: List[TranslatedLexerTokenInfoWithMatchRule] = []
        self.last_shift_state = 0
        self.last_reduce_rules: List[int] = []

    def __init__(
        self,
        action_table: Dict[str, List[Union[str, None]]],
        goto_table: Dict[str, List[Union[str, None]]],
        rule_left_hand_side_symbol: List[str],
        rule_right_hand_side_symbol: List[str],
        state_rule_set_list: List[List[RuleMatchInfo]],
        terminal_symbol_name_list: List[str],
        fancy_tokens: List[TranslatedLexerTokenInfoWithMatchRule],
    ) -> None:
        self.action_table = action_table
        self.goto_table = goto_table
        self.rule_left_hand_side_symbol = rule_left_hand_side_symbol
        self.rule_right_hand_side_symbol = rule_right_hand_side_symbol
        self.state_rule_set_list = state_rule_set_list
        self.terminal_symbol_name_list = terminal_symbol_name_list
        self.stack: List[Union[int,
                               TranslatedLexerTokenInfoWithMatchRule]] = [0]
        self.fancy_tokens = fancy_tokens
        self.reset_variables()

    def reduce(self, cur_action: str):
        num = int(cur_action[1:])
        self.last_reduce_rules.append(num)
        # pop stack
        pop_num = len(self.rule_right_hand_side_symbol[num])
        if pop_num != 0:
            index = 0
            for element in self.stack[-pop_num * 2:]:
                if type(element) is dict:
                    record_token = element.copy()
                    record_token["match_rule"] = num
                    record_token["match_index"] = index
                    self.final_tokens.append(record_token)
                    index += 1
            del self.stack[-pop_num * 2:]
        temp_state = self.stack[-1]
        if type(temp_state) is not int:
            raise Exception("state must be int")
        state = temp_state
        # push reduced symbol
        reduced_symbol = self.rule_left_hand_side_symbol[num]
        fancy_reduced_symbol = TranslatedLexerTokenInfoWithMatchRule(text="", token_str=reduced_symbol,
                                                                     first_line=0, first_column=0, last_line=0, last_column=0, match_rule=-1, match_index=-1)
        self.stack.append(fancy_reduced_symbol)
        # push state
        state_num = self.goto_table[reduced_symbol][state]
        if state_num is None:
            raise Exception("get None")
        else:
            self.stack.append(int(state_num))

    # return True represent completing parsing target . return False represent failed on parsing
    def LR_1_parsing(self, stop_pos: Pos = None):
        # reset to initial
        self.reset_variables()

        while True:
            state = self.stack[-1]
            print("state : ", state)
            if type(state) is not int:
                raise Exception("state must be int")
            cur_token = self.fancy_tokens[self.cur_word_index]
            print("cur_token : ", cur_token)
            cur_word = cur_token.get("token_str")
            cur_action = self.action_table[cur_word][state]
            if cur_action and cur_action.startswith("r"):
                pass
            elif stop_pos:
                if (stop_pos["line"] == cur_token["first_line"] and
                        cur_token["first_column"] <= stop_pos["column"] <= cur_token["last_column"]):
                    return True
            if self.cur_word_index > len(self.fancy_tokens) - 1:
                token = list(self.action_table.keys())[0]
                action = self.action_table[token][state]
                if action is None:
                    break
                    # raise Exception("action is None")
                while action.startswith("r"):
                    if action.startswith("r"):
                        try:
                            self.reduce(action)
                        except:
                            return False
                        temp_state = self.stack[-1]
                        if type(temp_state) is not int:
                            raise Exception("state must be int")
                        state = temp_state
                    else:
                        break
                break

            print("cur_action : ", cur_action)
            if cur_action is None:
                # action is None
                # raise Exception("action is None")
                return False
            if cur_action.startswith("r"):
                try:
                    self.reduce(cur_action)
                except:
                    return False
            elif cur_action.startswith("s"):
                num = int(cur_action[1:])
                self.last_shift_state = num
                self.last_reduce_rules = []
                # push symbol
                self.stack.append(cur_token)
                # push state
                self.stack.append(num)
                if cur_word != "$end":
                    self.cur_word_index += 1
            elif cur_action == "accept":
                return True
        return True

    def get_introspection_list(self):
        name_resolution_list: List[WordInfo] = []
        # add special function
        result = filter(lambda t: t["token_str"] in ["NAME", "FCOUNT", "FSUBSTRING", "FDATE_ADD", "FDATE_SUB"],
                        self.final_tokens)
        for token in list(result):
            name_resolution_list.append(WordInfo(text=token["text"], token_str=token["token_str"],
                                                 first_line=token["first_line"], first_column=token["first_column"],
                                                 last_line=token["last_line"], last_column=token["last_column"],
                                                 match_rule=token["match_rule"], match_index=token["match_index"],
                                                 kind=get_type_of_name_token_by_match_rule(token["token_str"],
                                                                                           token["match_rule"], token["match_index"])))
        return name_resolution_list
    # if no state return -1

    def get_last_state(self):
        if len(self.stack) == 0:
            return -1
        if isinstance(self.stack[-1], int):
            return self.stack[-1]
        return -1

    def get_suggestion(self, pos: Pos):
        self.LR_1_parsing(pos)
        suggestions = Suggestions(name_type=[], terminal_symbol=[])

        # get suggestion by last shift state
        last_shift_state = self.last_shift_state
        terminal_symbol = set()
        name_type_list = set()
        for match_rule in self.state_rule_set_list[last_shift_state]:
            if len(self.rule_right_hand_side_symbol[match_rule["number"]]) > 0:
                symbol_type = self.rule_right_hand_side_symbol[match_rule["number"]
                                                               ][match_rule["point"]]
                if symbol_type == "NAME":
                    name_type_list.add(get_type_of_name_token_by_match_rule(
                        symbol_type, match_rule["number"], match_rule["point"]))
                else:
                    if symbol_type in self.terminal_symbol_name_list:
                        terminal_symbol.add(symbol_type)

        # get suggestions when last action is reduce
        if len(suggestions["name_type"]) == 0 and len(suggestions["terminal_symbol"]) == 0:
            last_state = self.get_last_state()
            if isinstance(last_state, int):
                for match_rule in self.state_rule_set_list[last_state]:
                    if len(self.rule_right_hand_side_symbol[match_rule["number"]]) > 0:
                        symbol_type = self.rule_right_hand_side_symbol[match_rule["number"]
                                                                       ][match_rule["point"]]
                        if symbol_type == "NAME":
                            name_type_list.add(get_type_of_name_token_by_match_rule(
                                symbol_type, match_rule["number"], match_rule["point"]))
                        else:
                            if symbol_type in self.terminal_symbol_name_list:
                                terminal_symbol.add(symbol_type)

        # get suggestions by the already done reduction after last shift
        for rule in self.last_reduce_rules:
            if len(self.rule_right_hand_side_symbol[rule]) == 0:
                # find left hand side has same symbol's rule
                lhs_symbol = self.rule_left_hand_side_symbol[rule]
                other_option_rules = []
                cur_rule = rule - 1
                while cur_rule > 0 and self.rule_left_hand_side_symbol[cur_rule] == lhs_symbol:
                    other_option_rules.append(cur_rule)
                    cur_rule -= 1
                cur_rule = rule + 1
                while cur_rule < len(self.rule_left_hand_side_symbol) and self.rule_left_hand_side_symbol[cur_rule] == lhs_symbol:
                    other_option_rules.append(cur_rule)
                    cur_rule += 1
                for other_rule in other_option_rules:
                    symbol_type = self.rule_right_hand_side_symbol[other_rule][0]
                    if symbol_type == "NAME":
                        name_type_list.add(get_type_of_name_token_by_match_rule(
                            symbol_type, other_rule, 0))
                    else:
                        if symbol_type in self.terminal_symbol_name_list:
                            terminal_symbol.add(symbol_type)
            # print("rule : ", rule)
        suggestions["terminal_symbol"] = list(terminal_symbol)
        suggestions["name_type"] = list(name_type_list)
        return suggestions

    # def get_suggestion_by_state(self, state_num: int) -> List[str]:
    #     # find state state_num for what symbol has shift action in that state.
    #     # So we can sugesttion that
    #     suggestion_list = []
    #     for entry in self.action_table:
    #         action = self.action_table[entry][state_num]
    #         if action is not None:
    #             if action.startswith("s"):
    #                 suggestion_list.append(entry)
    #     return suggestion_list
