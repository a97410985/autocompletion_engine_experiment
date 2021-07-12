from autocompletion_engine import AutocompletionEngine
from bison_xml_reader import BisonXmlReader, TranslatedLexerTokenInfo
from lexer_caller import LexerCaller
from pprint import pprint

bison_xml_reader = BisonXmlReader(
    "/home/autocompletion_engine_experiment/grammar/pmysql/pmysql.xml")
bison_xml_reader.read()
lexer_caller = LexerCaller(
    "/home/autocompletion_engine_experiment/src/libpmysql.so")

command = "update customers set ContactName='Alfred Schmidt', City='Frankfurt' WHERE CustomerID=1;"
tokens = lexer_caller.get_tokens(command)
# pprint(tokens)

translated_fancy_tokens = bison_xml_reader.translate_fancy_tokens_token_num_to_bison_str(
    tokens)
translated_fancy_tokens.append(TranslatedLexerTokenInfo(text="$end", token_str="$end",
                                                        first_line=0, first_column=0, last_line=0, last_column=0))
# for token in translated_tokens:
#     print(token)
# pprint(translated_fancy_tokens)

autocompletion_engine = AutocompletionEngine(bison_xml_reader.action_table, bison_xml_reader.goto_table,
                                             bison_xml_reader.rule_left_hand_side_symbol, bison_xml_reader.rule_right_hand_side_symbol_num, translated_fancy_tokens)
autocompletion_engine.LR_1_parsing()

# suggestions = autocompletion_engine.get_suggestions()
# print(suggestions)


# successful match command below
# "select a from b as c;"
# "select a from b;"
# "update customers set ContactName='Alfred Schmidt', City='Frankfurt' WHERE CustomerID=1;"
