    <program> ::= <includes> <definitions> <main-function>
    <statement> ::= <declaration> | <expression-statement> | <conditional-statement> | <loop-statement>
    <declaration> ::= <type> <identifier> ";"
    <expression-statement> ::= <expression> ";"
    <type> ::= "int" | "double" | "char"
    <identifier> ::= <letter> | <identifier> <letter> | <identifier> <digit>
    <letter> ::= "a" | "b" | ... | "z" | "A" | "B" | ... | "Z"
    <digit> ::= "0" | "1" | ... | "9"