## Trabalho

Function_ -> main() { DB } 
            | id() { DB }
D -> Type L;D | epsilon
L -> id, L | id; // Não está em LL(1)

// Transformando em LL(1)
=> L -> IDL'
L' -> ,L | epsilon