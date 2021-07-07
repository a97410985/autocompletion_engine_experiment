```shell
flex -o pmysql.c pmysql.l
bison -d pmysql.y

gcc -c -fpic pmysql.c pmysql.tab.c  -lfl -DYYDEBUG=1
gcc -shared -o libpmysql.so pmysql.o pmysql.tab.o
```
Generate lexer 「.so file」, which can be used by ctypes. So that can be called by python file.