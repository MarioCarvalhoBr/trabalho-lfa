#ifndef __LEX
#define __LEX

#include <stdio.h>

enum boolean {FALSE=0, TRUE};
#define nSymbols 26
enum {LETRA=nSymbols, DIGITO, INVALIDO};

enum tKeyword {BREAK=0, CASE, CHAR, DEFAULT, DO, DOUBLE, ELSE, FLOAT, FOR, IF, INT, MAIN, RETURN, STRUCT, SWITCH, VOID, WHILE, nKeywords};
enum tTerminal {ID=nKeywords, NUM, OP_PLUS_ATRIB,OP_MINUS_ATRIB,OP_DIV_ATRIB,OP_MULT_ATRIB, OP_ATRIB, OP_ADIT, OP_MULT,OP_DIV, OP_REL, ABRE_PARENT, FECHA_PARENT, PONTO_VIRG, VIRG, ABRE_CHAVES, FECHA_CHAVES, CARACTER, STRING, OP_BIT_AND, OP_BIT_OR, OP_LOG,  OP_CASE, ABRE_COLC, FECHA_COLC, PONTO, OP_MINUS, OP_MINUSMINUS, OP_PONT, OP_PLUSPLUS, DOT_DOT, OP_NOT, FIM, nTerminal};
enum tErros{ERRO_LEXICO=nTerminal, ERRO_SINTATICO};
extern int lines;
extern char lexema[81];
extern char *terminalName[];
extern FILE *fin;

int lex();

#endif
