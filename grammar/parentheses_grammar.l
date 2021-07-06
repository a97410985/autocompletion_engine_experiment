%{
 enum yytokentype {
    OP = 258,
    CP = 259,
 };
%}

%%
"(" {return OP;}
")" {return CP;}
.
%%