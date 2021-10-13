from pathlib import Path
from typing import List
import pytest
import unittest

from autocompletion_engine import AutocompletionEngine, Pos
from bison_xml_reader import BisonXmlReader, TranslatedLexerTokenInfoWithMatchRule, WordInfo
from lexer_caller import LexerCaller


class Test:
    def get_kind_list(self, word_info_list: List[WordInfo]):
        sorted_word_info_list = sorted(word_info_list, key=lambda word: (
            word['first_line'], word['first_column']))
        result: List[str] = []
        for word_info in sorted_word_info_list:
            result.append(word_info["kind"])
        return result

    def create_autocompletion_engine(self, command: str, lexer_caller: LexerCaller, bison_xml_reader: BisonXmlReader):
        tokens = lexer_caller.get_tokens(command)
        translated_fancy_tokens = bison_xml_reader.translate_fancy_tokens_token_num_to_bison_str(
            tokens)
        translated_fancy_tokens.append(TranslatedLexerTokenInfoWithMatchRule(text="$end", token_str="$end",
                                                                             first_line=0, first_column=0, last_line=0, last_column=0, match_rule=-1, match_index=-1))

        return AutocompletionEngine(bison_xml_reader.action_table, bison_xml_reader.goto_table,
                                    bison_xml_reader.rule_left_hand_side_symbol, bison_xml_reader.rule_right_hand_side_symbol,
                                    bison_xml_reader.state_rule_set_list, bison_xml_reader.terminal_symbol_name_list, translated_fancy_tokens)

    @pytest.fixture()
    def bison_xml_reader(self):
        bison_xml_reader = BisonXmlReader(
            str(Path(__file__).parent.absolute().parent.absolute().parent.absolute()) +
            "/grammar/pmysql/pmysql.xml")
        bison_xml_reader.read()
        yield bison_xml_reader

    @pytest.fixture()
    def lexer_caller(self):
        lexer_caller = LexerCaller(
            str(Path(__file__).parent.absolute().parent.absolute().parent.absolute()) +
            "/src/libpmysql.so")
        yield lexer_caller

    def test_instrospection_for_full_match(self, bison_xml_reader, lexer_caller):
        command = "update customers set ContactName='Alfred Schmidt', City='Frankfurt' WHERE CustomerID=1;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            result_list,
            [{'text': 'customers', 'token_str': 'NAME', 'first_line': 1, 'first_column': 7, 'last_line': 1, 'last_column': 16, 'match_rule': 45, 'match_index': 0, 'kind': 'table'},
             {'text': 'ContactName', 'token_str': 'NAME', 'first_line': 1, 'first_column': 21,
                 'last_line': 1, 'last_column': 32, 'match_rule': 128, 'match_index': 0, 'kind': 'column'},
             {'text': 'City', 'token_str': 'NAME', 'first_line': 1, 'first_column': 51, 'last_line': 1,
                 'last_column': 55, 'match_rule': 130, 'match_index': 2, 'kind': 'column'},
             {'text': 'CustomerID', 'token_str': 'NAME', 'first_line': 1, 'first_column': 74, 'last_line': 1, 'last_column': 84, 'match_rule': 221, 'match_index': 0, 'kind': 'column'}],
        )

    def test_instrospection_select_statement(self, bison_xml_reader, lexer_caller):
        command = "SELECT CustomerName, City, Country FROM Customers;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["column", "column", "column", "table"]
        )

    def test_instrospection_select_statement_with_where(self, bison_xml_reader, lexer_caller):
        command = "SELECT * FROM Customers WHERE Country='Mexico';"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["table", "column"]
        )

    def test_instrospection_select_statement_with_order_by(self, bison_xml_reader, lexer_caller):
        command = "SELECT * FROM Customers ORDER BY Country;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["table", "column"]
        )

    def test_instrospection_select_statement_with_order_by_multi_column(self, bison_xml_reader, lexer_caller):
        command = "SELECT * FROM Customers ORDER BY Country, CustomerName;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["table", "column", "column"]
        )

    def test_instrospection_select_statement_with_function(self, bison_xml_reader, lexer_caller):
        command = "SELECT MIN(Price) AS SmallestPrice FROM Products;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["function", "column", "alias", "table"]
        )

    def test_instrospection_select_statement_with_multi_column_alias(self, bison_xml_reader, lexer_caller):
        command = "SELECT CustomerID AS ID, CustomerName AS Customer FROM Customers;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["column", "alias", "column", "alias", "table"]
        )

    def test_instrospection_select_statement_with_inner_join(self, bison_xml_reader, lexer_caller):
        command = "SELECT Orders.OrderID, Customers.CustomerName FROM Orders INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        print(self.get_kind_list(result_list))
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["table", "column", "table", "column", "table",
                "table", "table", "column", "table", "column"]
        )

    def test_instrospection_select_statement_with_having(self, bison_xml_reader, lexer_caller):
        command = "SELECT COUNT(CustomerID), Country FROM Customers GROUP BY Country HAVING COUNT(CustomerID) > 5;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        print(self.get_kind_list(result_list))
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["function", "column", "column", "table", "column",
                "function", "column"]
        )

    def test_instrospection_select_statement_with_special_function(self, bison_xml_reader, lexer_caller):
        command = "SELECT SUBSTRING(CustomerName, 1, 5) AS ExtractString FROM Customers;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        print(self.get_kind_list(result_list))
        unittest.TestCase().assertListEqual(
            self.get_kind_list(result_list),
            ["function", "column", "alias", "table"]
        )

    def test_stop_pos(self, bison_xml_reader, lexer_caller):
        command = "SELECT a from b;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing(stop_pos=Pos(line=1, column=7))
        autocompletion_engine.get_introspection_list()
        assert autocompletion_engine.cur_word_index == 1

    def test_call_LR_1_parsing_multi_times(self, bison_xml_reader, lexer_caller):
        command = "SELECT a from b;"
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        autocompletion_engine.LR_1_parsing()
        result_list = autocompletion_engine.get_introspection_list()
        autocompletion_engine.LR_1_parsing()
        result_list2 = autocompletion_engine.get_introspection_list()
        assert result_list == result_list2

    def test_autocompletion_get_suggestion_at_select_statement_and_after_database(self, bison_xml_reader, lexer_caller):
        command = "select col1 from db1."
        suggest_pos = len("select col1 from db1.")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        assert result["name_type"] == ["table"]
        assert result["terminal_symbol"] == []

    def test_autocompletion_get_suggestion_at_select_statement_and_after_database_2(self, bison_xml_reader, lexer_caller):
        command = "select col1 from db1."
        suggest_pos = len("select col1 from db1.tabl")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        assert result["name_type"] == ["table"]
        assert result["terminal_symbol"] == []

    def test_autocompletion_get_suggestion_at_select_statement_and_after_column(self, bison_xml_reader, lexer_caller):
        command = "select col1 "
        suggest_pos = len("select col1 ")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        print(result)
        assert result["name_type"] == ["alias"]
        assert set(["AS", "';'", "'.'", "','", "'('", "FROM", "LIKE"]).issubset(result["terminal_symbol"])


    def test_autocompletion_get_suggestion_at_select_statement_and_after_select(self, bison_xml_reader, lexer_caller):
        command = "select "
        suggest_pos = len("select ")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        print(result)
        assert set(result["name_type"]) == set(["function", "table", "column"])
        assert set(["DISTINCT", "HIGH_PRIORITY", "SQL_CALC_FOUND_ROWS"]).issubset(result["terminal_symbol"])

    def test_autocompletion_get_suggestion_at_select_statement_and_function_left_parent(self, bison_xml_reader, lexer_caller):
        command = "select max("
        suggest_pos = len("select max(")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        print(result)
        assert set(result["name_type"]) == set(["function", "table", "column"])
        assert set(["FDATE_ADD", "FDATE_SUB", "FTRIM"]).issubset(result["terminal_symbol"])

    def test_autocompletion_get_suggestion_at_insert_into_statement_after_insert_into(self, bison_xml_reader, lexer_caller):
        command = "insert into "
        suggest_pos = len("insert into ")
        autocompletion_engine = self.create_autocompletion_engine(
            command, lexer_caller, bison_xml_reader)
        result = autocompletion_engine.get_suggestion(Pos(line=1, column=suggest_pos))
        print(result)
        assert set(result["name_type"]) == set(["table", "database"])
        assert result["terminal_symbol"] == []       
 