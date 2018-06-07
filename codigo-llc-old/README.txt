Para compilar o analisador sintatico (parser.c) faça:
make

Para executar o analisador faça:
./parser <programa>
onde <programa> é o nome do arquivo contendo o programa em C- a ser analisado.
O código tem 4 programas exemplos (exemplo1.c,exemplo2.c,exemplo3.c e exemplo4.c). Apenas o exemplo1.c está sintaticamente correto.

O analisador mostra na saída o total de linhas processadas e uma mensagem de sucesso ou de erro. Observe que o analisador pára no primeiro erro encontrado.

Para entender o analisador léxico (lex.c) faça uso do programa avaliaLex.c. Para compilá-lo faça:
make -f makefile-lex

Para executar o avaliador de léxico faça:
./avalia-lex <programa>
onde <programa> é o arquivo contendo o programa a ser analisado lexicamente.

O avaliador mostrará na saída padrão, a sequência de palavras aceitas (terminais da gramática de C-) pelo analisador léxico.
