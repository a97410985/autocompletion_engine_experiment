from typing import Dict, List, Union


class AutocompletionEngine:
    def __init__(
        self,
        action_table: Dict[str, List[Union[str, None]]],
        goto_table: Dict[str, List[Union[str, None]]],
        rule_left_hand_side_symbol: List[str],
        rule_right_hand_side_symbol_num: List[int],
        words: List[str],
    ) -> None:
        self.action_table = action_table
        self.goto_table = goto_table
        self.rule_left_hand_side_symbol = rule_left_hand_side_symbol
        self.rule_right_hand_side_symbol_num = rule_right_hand_side_symbol_num
        self.stack: List[Union[int, str]] = [0]
        self.cur_word_index = 0
        self.words = words

    def reduce(self, cur_action: str):
        num = int(cur_action[1:])
        # pop stack
        pop_num = self.rule_right_hand_side_symbol_num[num]
        if pop_num != 0:
            del self.stack[-pop_num * 2 :]
        state = int(self.stack[-1])
        # push reduced symbol
        reduced_symbol = self.rule_left_hand_side_symbol[num]
        print("reduced_symbol : ", reduced_symbol)
        self.stack.append(reduced_symbol)
        # push state
        state_num = self.goto_table[reduced_symbol][state]
        if state_num is None:
            raise Exception("get None")
        else:
            self.stack.append(state_num)

    # return True represent full parsing. return False represent failed on parsing
    def LR_1_parsing(self, words: List[str]):
        # reset to initial
        self.stack = [0]
        self.cur_word_index = 0

        while True:
            state = int(self.stack[-1])
            print("state : ", state)
            if self.cur_word_index > len(words) - 1:
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
                        state = int(self.stack[-1])
                    else:
                        break
                break
            cur_word = self.words[self.cur_word_index]
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
                self.stack.append(cur_word)
                # push state
                self.stack.append(num)
                if cur_word != "$end":
                    self.cur_word_index += 1
            elif cur_action == "accept":
                print("accept")
                return True
        return True

    def get_suggestion_by_state(self, state_num: int) -> List[str]:
        # find state state_num for what symbol has shift action in that state.
        # So we can sugesttion that
        suggestion_list = []
        for entry in self.action_table:
            action = self.action_table[entry][state_num]
            if action is not None:
                if action.startswith("s"):
                    suggestion_list.append(entry)
        return suggestion_list

    # currently only work on syntax fully match
    def get_suggestions(self):
        if len(self.words) > 0:
            suggestion_list = []
            if self.LR_1_parsing(self.words):
            # autocomple suggestion part
                # get the last state, and find what symbol has shift action in that state.
                # So we can sugesttion that
                last_state = int(self.stack[-1])
                suggestion_list = self.get_suggestion_by_state(last_state)
                if len(suggestion_list) > 0:
                    if suggestion_list[0] == "$end":
                        # perfect match
                        suggestion_list = self.get_suggestion_by_state(0)
            else:
                # if not full parsing, the last successful is last two state
                last_state = int(self.stack[-4])
                suggestion_list = self.get_suggestion_by_state(last_state)
            return suggestion_list
        else:
            return self.get_suggestion_by_state(0)