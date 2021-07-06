%{
#  include <stdio.h>
#  include <stdlib.h>
#  include "parentheses_grammar.tab.h"
%}

%token OP CP

%%
Goal: List
List: List Pair
    | Pair
Pair: OP Pair CP
    | OP CP {printf("reduce pair\n");}
%%

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }

int
main()
{
 return yyparse();
}
