from typing import Dict, List, Union

from bison_xml_reader import TranslatedLexerTokenInfoWithMatchRule, WordInfo
from name_resolution_utils import get_type_of_name_token_by_match_rule


class AutocompletionEngine:
    def __init__(
        self,
        action_table: Dict[str, List[Union[str, None]]],
        goto_table: Dict[str, List[Union[str, None]]],
        rule_left_hand_side_symbol: List[str],
        rule_right_hand_side_symbol_num: List[int],
        fancy_tokens: List[TranslatedLexerTokenInfoWithMatchRule],
    ) -> None:
        self.action_table = action_table
        self.goto_table = goto_table
        self.rule_left_hand_side_symbol = rule_left_hand_side_symbol
        self.rule_right_hand_side_symbol_num = rule_right_hand_side_symbol_num
        self.stack: List[Union[int,
                               TranslatedLexerTokenInfoWithMatchRule]] = [0]
        self.cur_word_index = 0
        self.fancy_tokens = fancy_tokens
        self.final_tokens: List[TranslatedLexerTokenInfoWithMatchRule] = []

    def reduce(self, cur_action: str):
        num = int(cur_action[1:])
        # pop stack
        pop_num = self.rule_right_hand_side_symbol_num[num]
        if pop_num != 0:
            index = 0
            for element in self.stack[-pop_num * 2:]:
                if type(element) is dict:
                    record_token = element.copy()
                    record_token["match_rule"] = num
                    record_token["match_index"] = index
                    self.final_tokens.append(record_token)
                    print("pop : ", element)
                    index += 1
            del self.stack[-pop_num * 2:]
        temp_state = self.stack[-1]
        if type(temp_state) is not int:
            raise Exception("state must be int")
        state = temp_state
        # push reduced symbol
        reduced_symbol = self.rule_left_hand_side_symbol[num]
        print("reduced_symbol : ", reduced_symbol)
        fancy_reduced_symbol = TranslatedLexerTokenInfoWithMatchRule(text="", token_str=reduced_symbol,
                                                                     first_line=0, first_column=0, last_line=0, last_column=0, match_rule=-1, match_index=-1)
        self.stack.append(fancy_reduced_symbol)
        # push state
        state_num = self.goto_table[reduced_symbol][state]
        if state_num is None:
            raise Exception("get None")
        else:
            self.stack.append(int(state_num))

    # return True represent full parsing. return False represent failed on parsing
    def LR_1_parsing(self):
        # reset to initial
        self.stack = [0]
        self.cur_word_index = 0

        while True:
            state = self.stack[-1]
            if type(state) is not int:
                raise Exception("state must be int")
            print("state : ", state)
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
            cur_token = self.fancy_tokens[self.cur_word_index]
            cur_word = cur_token.get("token_str")
            cur_action = self.action_table[cur_word][state]
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
                # push symbol
                self.stack.append(cur_token)
                # push state
                self.stack.append(num)
                if cur_word != "$end":
                    self.cur_word_index += 1
            elif cur_action == "accept":
                print("accept")
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
                                                 kind=get_type_of_name_token_by_match_rule(token,
                                                                                           token["match_rule"], token["match_index"])))
        return name_resolution_list
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
