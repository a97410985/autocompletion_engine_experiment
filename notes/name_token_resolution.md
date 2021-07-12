## purpose

## resolution method

### analysis
we know NAME token appears at which rule by bison's report(*.output file)
list below
```text
NAME <strval> (258) 26 27 45 46 47 51 52 79 80 83 89 90 95 113 114 115 116 117 118 120 121 122 128 129 130 131 133 134 138 139 140 141 142 143 147 221 223 264
```
We explore that.

#### NAME's type
1. database name
2. table name
3. column name
4. alias

#### rule 26 and 27
```text
   26 column_list: NAME
   27            | column_list ',' NAME
```
NAME token would be `column`

#### rule 45
```text
   45 table_factor: NAME opt_as_alias index_hint
```
NAME token would be `table`

#### rule 46
```text
   46 table_factor: NAME '.' NAME opt_as_alias index_hint
```
first NAME token would be `database`
second NAME token would be `table`

#### rule 47
```text
   47 table_factor: table_subquery opt_as NAME
```
NAME token would be `alias(table)`

#### rule 51 and 52
```text
   51 opt_as_alias: AS NAME
   52             | NAME
```
all NAME token would be `alias`

#### rule 79 and 80
```text
   79 index_list: NAME
   80           | index_list ',' NAME
```
NAME token would be `column`

#### rule 83
```text
   83 delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit
```
NAME token would be `table`

#### rule 89 and 90(this is for 「Delete from multiple tables in one query」)
```text
   89 delete_list: NAME opt_dot_star
   90            | delete_list ',' NAME opt_dot_star
```
NAME token would be `table`

below is 「Delete from multiple tables in one query」 example
```text
DELETE t1, t2 
FROM table1 t1 LEFT JOIN table2 t2 ON t1.id = t2.id 
WHERE t1.id = some_id
```

#### rule 95
```text
   95 insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate
```
NAME token would be `table`

#### rule 115, 116, 117, 118(this is for another syntax to insert single row)
```text
  115 insert_asgn_list: NAME COMPARISON expr
  116                 | NAME COMPARISON DEFAULT
  117                 | insert_asgn_list ',' NAME COMPARISON expr
  118                 | insert_asgn_list ',' NAME COMPARISON DEFAULT
```
NAME token would be `column
`

「another syntax to insert single row」 example
```text
INSERT INTO table SET a=1, b=2, c=3
```

#### rule 120, 121, 122
```text
  120 replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate
  121             | REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate
  122             | REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate
```
NAME token would be `table`

[related info](https://dev.mysql.com/doc/refman/8.0/en/replace.html)

#### rule 128, 130
```text
  128 update_asgn_list: NAME COMPARISON expr
  130                 | update_asgn_list ',' NAME COMPARISON expr
```
NAME token would be `column`

[related info](https://dev.mysql.com/doc/refman/8.0/en/update.html)

#### rule 129, 131
```text
  129 update_asgn_list: NAME '.' NAME COMPARISON expr
  131                 | update_asgn_list ',' NAME '.' NAME COMPARISON expr
```
In rule, first NAME token would be `table`
In rule, second NAME token would be `column`

「 perform UPDATE operations covering multiple tables 」exmaple
```text
UPDATE items,month SET items.price=month.price
WHERE items.id=month.id;
```

[related info](https://dev.mysql.com/doc/refman/8.0/en/update.html)

#### rule 133, 134
```text
  133 create_database_stmt: CREATE DATABASE opt_if_not_exists NAME
  134                     | CREATE SCHEMA opt_if_not_exists NAME
```
NAME token would be `database`
In second rule. Because in MySQL, schema is synonymous with database. So we resolution it to `database`

#### rule 138, 140, 141
```text
  138 create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'
  140                  | CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement
  141                  | CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement
```
NAME token would be `table`

#### rule 139, 142, 143
```text
  139                  | CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'
  142                  | CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement
  143                  | CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement
```
In rule, first NAME token would be `database`
In rule, first NAME token would be `table`

example(create haha table in test2 database)
```text
create table test2.haha (a int);
```

#### rule 147
```text
  147 create_definition: $@1 NAME data_type column_atts
```
NAME token would be `column`

#### rule 221, 223
This rule is not very precise. Expr symbol can be used by construct many symbols like opt_where, groupby_list, opt_having..., 
so maybe the NAME token can be different. But we just use one level rule to resolute NAME token. If there are many error cases. Then we need to consider using more levels to resolute.

```text
  221 expr: NAME
```
NAME token would be `column`

```text
  223 expr: NAME '.' NAME
```
first NAME token would be `table`
second NAME token would be `column`

#### rule 264
not knowing it would be what kind of symbol
```sql
"SELECT MIN(Price) AS SmallestPrice FROM Products;"
```
The MIN word is NAME token as an above command. SO rule 264 would be resolved to function name.