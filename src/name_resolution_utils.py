from bison_xml_reader import TranslatedLexerTokenInfoWithMatchRule


def get_type_of_name_token_by_match_rule(token: TranslatedLexerTokenInfoWithMatchRule, rule_num: int, match_index: int):
    if token["token_str"] in ["FCOUNT", "FCOUNT", "FSUBSTRING", "FDATE_ADD", "FDATE_SUB"]:
        return "function"
    database_rule = [133, 134]
    table_rule = [45, 83, 89, 90, 95, 120, 121, 122, 138, 140, 141]
    column_rule = [26, 27, 79, 80, 115, 116, 117, 118, 128, 130, 147, 221]
    function_rule = [264]
    # TODO: may deep into what kind of alias(talbe alias ...)
    alias_rule = [47, 51, 52]
    name_resolution_with_match_index = {
        "46": {
            "0": "column",
            "2": "table"
        },
        "129": {
            "0": "table",
            "2": "column"
        },
        "131": {
            "2": "table",
            "4": "column"
        },
        "139": {
            "4": "database",
            "6": "table"
        },
        "142": {
            "4": "database",
            "6": "table"
        },
        "143": {
            "4": "database",
            "6": "table"
        },
        "223": {
            "0": "table",
            "2": "column"
        }
    }
    if rule_num in database_rule:
        return "database"
    elif rule_num in table_rule:
        return "table"
    elif rule_num in column_rule:
        return "column"
    elif rule_num in alias_rule:
        return "alias"
    elif rule_num in function_rule:
        return "function"
    else:
        rule = name_resolution_with_match_index.get(str(rule_num))
        if rule is not None:
            kind = rule.get(str(match_index))
            if kind is not None:
                return kind
    raise Exception("no match")
