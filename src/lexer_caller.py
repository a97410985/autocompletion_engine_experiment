from os import initgroups
import pathlib
import ctypes
from typing import List, TypedDict


class LexerTokenInfo(TypedDict):
    text: str
    token_num: int
    first_line: int
    first_column: int
    last_line: int
    last_column: int


class LexerCaller():
    def __init__(self, shared_library_path: str) -> None:
        self.shared_library_path = shared_library_path

    def get_tokens(self, text: str) -> List[LexerTokenInfo]:
        libname = self.shared_library_path
        c_lib = ctypes.CDLL(libname)
        c_lib.yyget_text.restype = ctypes.c_char_p

        c_lib.get_first_line.restype = ctypes.c_int
        c_lib.get_last_line.restype = ctypes.c_int
        c_lib.get_first_column.restype = ctypes.c_int
        c_lib.get_last_column.restype = ctypes.c_int

        c_lib.yy_scan_string(ctypes.c_char_p(text.encode("utf-8")))
        tokens = []
        result = token_num = c_lib.yylex()
        while result:
            token: LexerTokenInfo = LexerTokenInfo(text=c_lib.yyget_text().decode("utf-8"),
                                                   token_num=token_num,
                                                   first_line=c_lib.get_first_line(),
                                                   first_column=c_lib.get_first_column(),
                                                   last_line=c_lib.get_last_line(),
                                                   last_column=c_lib.get_last_column())

            tokens.append(token)
            # print("text: ", c_lib.yyget_text())
            # # append method, maybe rewrite
            # print(f"first_line: {c_lib.get_first_line()},  last_line: {c_lib.get_last_line()}, first_column: {c_lib.get_first_column()}, last_column: {c_lib.get_last_column()}")
            # text = ""
            # if result < 256:
            #     # it is ascii literal
            #     text = chr(result)
            #     print(f"token's num : {result}, token's type : {chr(result)}")
            # else:
            #     # t = c_lib.yyget_text()
            #     text = c_lib.yyget_text()
            #     print(f"token's num : {result}")
            result = token_num = c_lib.yylex()

        return tokens
