from autocompletion_engine import AutocompletionEngine
from bison_xml_reader import BisonXmlReader
from lexer_caller import LexerCaller

bison_xml_reader = BisonXmlReader("/home/autocompletion_engine_experiment/grammar/pmysql/pmysql.xml")
bison_xml_reader.read()
lexer_caller = LexerCaller("/home/autocompletion_engine_experiment/src/libpmysql.so")

command = "update customers set ContactName='Alfred Schmidt', City='Frankfurt' WHERE CustomerID=1;"
tokens = lexer_caller.get_tokens(command)

translated_tokens = bison_xml_reader.translate_tokens_to_bison_str(tokens)
translated_tokens.append("$end")
print("translated_tokens : ", translated_tokens)

autocompletion_engine = AutocompletionEngine(bison_xml_reader.action_table, bison_xml_reader.goto_table,
                                             bison_xml_reader.rule_left_hand_side_symbol, bison_xml_reader.rule_right_hand_side_symbol_num, translated_tokens)
suggestions = autocompletion_engine.get_suggestions()
print(suggestions)


# successful match command below
# "select a from b as c;"
# "select a from b;"
# "update customers set ContactName='Alfred Schmidt', City='Frankfurt' WHERE CustomerID=1;"