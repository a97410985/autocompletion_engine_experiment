from bison_xml_reader import TranslatedLexerTokenInfoWithMatchRule


t = TranslatedLexerTokenInfoWithMatchRule(
    text="", token_str="", first_line=1, first_column=1, last_line=1, last_column=1, match_rule=-1)
print(type(t))
if type(t) is dict:
    print("haha")
