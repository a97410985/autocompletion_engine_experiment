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
        del self.stack[-self.rule_right_hand_side_symbol_num[num] * 2 :]
        state = int(self.stack[-1])
        # push reduced symbol
        reduced_symbol = self.rule_left_hand_side_symbol[num]
        self.stack.append(reduced_symbol)
        # push state
        state_num = self.goto_table[reduced_symbol][state]
        if state_num is None:
            raise Exception("get None")
        else:
            self.stack.append(state_num)
        print("reduce : ", reduced_symbol)

    def LR_1_parsing(self, words: List[str]):
        # reset to initial
        self.stack = [0]
        self.cur_word_index = 0

        while True:
            state = int(self.stack[-1])
            print("state: ", state)
            if self.cur_word_index > len(words) - 1:
                token = list(self.action_table.keys())[0]
                action = self.action_table[token][state]
                if action is None:
                    break
                    # raise Exception("action is None")
                while action.startswith("r"):
                    if action.startswith("r"):
                        self.reduce(action)
                        state = int(self.stack[-1])
                    else:
                        break
                break
            cur_word = self.words[self.cur_word_index]
            cur_action = self.action_table[cur_word][state]
            if cur_action is None:
                raise Exception("action is None")
            if cur_action.startswith("r"):
                self.reduce(cur_action)
            elif cur_action.startswith("s"):
                num = int(cur_action[1:])
                # push symbol
                self.stack.append(cur_word)
                # push state
                self.stack.append(num)
                if cur_word != "$end":
                    self.cur_word_index += 1
                print("shift")
            elif cur_action == "$accept":
                print("accept")
                break

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

    def get_suggestions(self):
        if len(self.words) > 0:
            self.LR_1_parsing(self.words)
            # autocomple suggestion part
            print(self.stack)
            # get the last state, and find what symbol has shift action in that state.
            # So we can sugesttion that
            last_state = int(self.stack[-1])
            suggestion_list = self.get_suggestion_by_state(last_state)
            if len(suggestion_list) == 0:
                if suggestion_list[0] == "$end":
                    # perfect match
                    suggestion_list = self.get_suggestion_by_state(0)
            return suggestion_list
        else:
            return self.get_suggestion_by_state(0)


# Grammar
#     0 $accept: Goal $end
#     1 Goal: List
#     2 List: List Pair
#     3     | Pair
#     4 Pair: OP Pair CP
#     5     | OP CP


# +-------+-----------------------------------+------------------------------+
# |       |            action table           |          goto table          |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# | state |  $end  |  error |   OP   |   CP   | $accept | Goal | List | Pair |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   0   |        |        |   s1   |        |         |   2  |   3  |   4  |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   1   |        |        |   s1   |   s5   |         |      |      |   6  |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   2   |   s7   |        |        |        |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   3   |   r1   |   r1   |   r1   |   r1   |         |      |      |   8  |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   4   |   r3   |   r3   |   r3   |   r3   |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   5   |   r5   |   r5   |   r5   |   r5   |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   6   |        |        |   s9   |        |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   7   | accept | accept | accept | accept |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   8   |   r2   |   r2   |   r2   |   r2   |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
# |   9   |   r4   |   r4   |   r4   |   r4   |         |      |      |      |
# +-------+--------+--------+--------+--------+---------+------+------+------+
action_table = {
    "$end": [None, None, "s7", "r1", "r3", "r5", None, "$accept", "r2", "r4"],
    "error": [None, None, None, "r1", "r3", "r5", None, "$accept", "r2", "r4"],
    "OP": ["s1", "s1", None, "s1", "r3", "r5", None, "$accept", "r2", "r4"],
    "CP": [None, "s5", None, "r1", "r3", "r5", "s9", "$accept", "r2", "r4"],
}
goto_table = {"$accept": [], "Goal": [2], "List": [3], "Pair": [4, 6, None, 8]}

rule_left_hand_side_symbol = ["$accept", "Goal", "List", "List", "Pair", "Pair"]
rule_right_hand_side_symbol_num = [1, 1, 2, 1, 3, 2]

words = ["OP"]
# words = ["OP", "CP", "$end"]
autocompletion_engine = AutocompletionEngine(
    action_table,
    goto_table,
    rule_left_hand_side_symbol,
    rule_right_hand_side_symbol_num,
    words,
)
print(autocompletion_engine.get_suggestions())
