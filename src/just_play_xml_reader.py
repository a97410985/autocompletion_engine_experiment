from bison_xml_reader import BisonXmlReader
from pprint import pprint

bison_xml_reader = BisonXmlReader("../grammar/parentheses/parentheses_grammar.xml")
bison_xml_reader.read()
pprint(bison_xml_reader.rule_right_hand_side_symbol_num)