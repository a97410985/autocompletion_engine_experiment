import pathlib
import ctypes

class LexerCaller():
    def __init__(self, shared_library_path: str) -> None:
        self.shared_library_path = shared_library_path

    def get_tokens(self, text:str):
        libname = self.shared_library_path
        c_lib = ctypes.CDLL(libname)
        c_lib.yyget_text.restype = ctypes.c_char_p

        c_lib.get_first_line.restype = ctypes.c_int
        c_lib.get_last_line.restype = ctypes.c_int
        c_lib.get_first_column.restype = ctypes.c_int
        c_lib.get_last_column.restype = ctypes.c_int

        c_lib.yy_scan_string(ctypes.c_char_p(text.encode("utf-8")))
        tokens = []
        result = c_lib.yylex()
        while result:
            tokens.append(result)
            # print("text: ", c_lib.yyget_text())
            # append method, maybe rewrite
            # print(f"first_line: {c_lib.get_first_line()},  last_line: {c_lib.get_last_line()}, first_column: {c_lib.get_first_column()}, last_column: {c_lib.get_last_column()}")

            # if result < 256:
            #     # it is ascii literal
            #     print(f"token's num : {result}, token's type : {chr(result)}")
            # else:
            #     # t = c_lib.yyget_text()
            #     print(f"token's num : {result}")
            result = c_lib.yylex()
        return tokens