from typing import Dict, List, TypedDict, Union
import xml.etree.ElementTree as ET
from pprint import pp, pprint

from lexer_caller import LexerTokenInfo


class TranslatedLexerTokenInfo(TypedDict):
    text: str
    token_str: str
    first_line: int
    first_column: int
    last_line: int
    last_column: int


class TranslatedLexerTokenInfoWithMatchRule(TypedDict):
    text: str
    token_str: str
    first_line: int
    first_column: int
    last_line: int
    last_column: int
    match_rule: int
    match_index: int


class WordInfo(TypedDict):
    text: str
    token_str: str
    first_line: int
    first_column: int
    last_line: int
    last_column: int
    match_rule: int
    match_index: int
    kind: str


def insert_fill_none(my_list: List[Union[str, None]], pos: int, value: str):
    if len(my_list) <= pos:
        my_list.extend([None] * (pos - len(my_list)))
        my_list.insert(pos, value)
    else:
        my_list[pos] = value


def check_list_item_none(my_list: List[Union[str, None]], pos):
    if len(my_list) <= pos:
        return True
    if my_list[pos] is None:
        return True
    return False


class BisonXmlReader:
    file_path = ""

    def __init__(self, file_path: str) -> None:
        self.file_path = file_path
        self.tree = ET.parse(file_path)
        self.root = self.tree.getroot()

    def read(self):
        # get rules list
        rules_element = self.root.find("grammar/rules")
        # rule_list: {lhs: '', rhs: []} []
        rule_list: List[Dict[str, List[str]]] = []
        if rules_element is not None:
            for rule_element in rules_element:
                lhs_element = rule_element.find("lhs")
                rhs_element = rule_element.find("rhs")
                if lhs_element is not None and rhs_element is not None:
                    rule_list.append({"lhs": [lhs_element.text or ''], "rhs": [
                                     element.text or '' for element in list(rhs_element or [])]})
        # [rule.get("lhs") for rule in rule_list]
        self.rule_left_hand_side_symbol = []
        for rule in rule_list:
            if rule is not None:
                lhs_list = rule.get("lhs")
                if lhs_list is None:
                    lhs_list = [""]
                self.rule_left_hand_side_symbol.append(lhs_list[0])
        # need handle below case
        # <rhs>
        #   <empty/>
        # </rhs>
        # the empty tag would be ''
        self.rule_right_hand_side_symbol_num = []
        for rule in rule_list:
            rhs_list = rule.get("rhs")
            if rhs_list is not None:
                if rhs_list[0] == '':
                    self.rule_right_hand_side_symbol_num.append(0)
                else:
                    self.rule_right_hand_side_symbol_num.append(len(rhs_list))
            else:
                raise ValueError("no rhs list")
        # self.rule_right_hand_side_symbol_num = [len(rule.get("rhs") or []) for rule in rule_list]

        # get terminal symbol list
        self.terminal_symbol_list = []
        terminals_element = self.root.find("grammar/terminals")
        if terminals_element:
            for terminal_element in terminals_element:
                self.terminal_symbol_list.append({'name': terminal_element.get("name"), 'symbol_number': terminal_element.get(
                    "symbol-number"), 'token_number': terminal_element.get("token-number")})
        # pprint(terminal_symbol_list)

        # get nonterminal symbol list
        non_terminal_symbol_list = []
        non_terminals_element = self.root.find("grammar/nonterminals")
        if non_terminals_element:
            for non_terminal_element in non_terminals_element:
                non_terminal_symbol_list.append({'name': non_terminal_element.get(
                    "name"), 'symbol_number': non_terminal_element.get("symbol-number")})
        # pprint(non_terminal_symbol_list)

        # get action_table and goto_table
        self.action_table: Dict[str, List[Union[str, None]]] = {}
        self.goto_table: Dict[str, List[Union[str, None]]] = {}

        for terminal in self.terminal_symbol_list:
            self.action_table[terminal.get("name")] = []
        for non_terminal in non_terminal_symbol_list:
            self.goto_table[non_terminal.get("name")] = []

        automation_element = self.root.find("automaton")
        if automation_element:
            for cur_state_num, state_element in enumerate(automation_element):
                transitions_element = state_element.find("actions/transitions")
                if transitions_element:
                    for transition_element in transitions_element:
                        symbol_name = transition_element.get("symbol") or ""
                        state_num = transition_element.get("state") or ""
                        if transition_element.get("type") == "shift":
                            # store in action_table with s<state num>
                            insert_fill_none(
                                self.action_table[symbol_name], cur_state_num, f"s{state_num}")
                        elif transition_element.get("type") == "goto":
                            # store in goto_table with <state num>
                            insert_fill_none(
                                self.goto_table[symbol_name], cur_state_num, state_num)

                reductions_element = state_element.find("actions/reductions")
                if reductions_element:
                    for reduction_element in reductions_element:
                        symbol_name = reduction_element.get("symbol") or ""
                        rule = reduction_element.get("rule") or ""
                        if symbol_name == "$default":
                            # fill remain place with r<rule num> or accept
                            if rule == "accept":
                                for terminal in self.terminal_symbol_list:
                                    terminal_name = terminal.get("name")
                                    if check_list_item_none(self.action_table[terminal_name], cur_state_num):
                                        insert_fill_none(
                                            self.action_table[terminal_name], cur_state_num, "accept")
                            else:
                                for terminal in self.terminal_symbol_list:
                                    terminal_name = terminal.get("name")
                                    if check_list_item_none(self.action_table[terminal_name], cur_state_num):
                                        insert_fill_none(
                                            self.action_table[terminal_name], cur_state_num, "r" + rule)
                        else:
                            insert_fill_none(
                                self.action_table[symbol_name], cur_state_num, "r" + rule)

    def translate_tokens_to_bison_internal_num(self, tokens: List[int]):
        translate_tokens = []
        for token in tokens:
            cur_token_num = token
            matches = [t for t in self.terminal_symbol_list if int(
                t.get("token_number")) == cur_token_num]
            if len(matches) > 0:
                translate_tokens.append(int(matches[0].get("symbol_number")))
            else:
                raise ValueError("no match element")
        return translate_tokens

    def translate_tokens_to_bison_str(self, tokens: List[int]) -> List[str]:
        translate_tokens = []
        for token in tokens:
            cur_token_num = token
            matches = [t for t in self.terminal_symbol_list if int(
                t.get("token_number")) == cur_token_num]
            if len(matches) > 0:
                translate_tokens.append(matches[0].get("name"))
            else:
                raise ValueError("no match element")
        return translate_tokens

    def translate_fancy_tokens_token_num_to_bison_str(self, fancy_tokens: List[LexerTokenInfo]):
        translated_fancy_tokens: List[TranslatedLexerTokenInfoWithMatchRule] = [
        ]
        tokens = [token.get("token_num") for token in fancy_tokens]
        translate_tokens = self.translate_tokens_to_bison_str(tokens)
        for index, fancy_token in enumerate(fancy_tokens):
            translated_fancy_token: TranslatedLexerTokenInfoWithMatchRule = TranslatedLexerTokenInfoWithMatchRule(text=fancy_token.get("text"), token_str=translate_tokens[index],
                                                                                                                  first_line=fancy_token.get("first_line"), first_column=fancy_token.get("first_column"),
                                                                                                                  last_line=fancy_token.get("last_line"), last_column=fancy_token.get("last_column"), match_rule=-1, match_index=-1)
            translated_fancy_tokens.append(translated_fancy_token)
        return translated_fancy_tokens

# example usage
# bison_xml_reader = BisonXmlReader("../grammar/parentheses/parentheses_grammar.xml")
