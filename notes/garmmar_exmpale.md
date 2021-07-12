#### rule 93(this is for 「Delete from multiple tables in one query」)
```text
   93 delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where
```

below is 「Delete from multiple tables in one query」 example
```text
DELETE FROM messages,usersmessages
USING messages
INNER JOIN usermessages on (messages.messageid = usersmessages.messageid)
WHERE messages.messsageid='1'
```