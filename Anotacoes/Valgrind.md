### Valgrind
* É uma ferramenta Linux (usar no wsl) para procurar por vazamento de memória.
* Mantém o controle dos dados que são alocados, mas não liberados, interceptando as funções malloc() e free().
* O Valgrind vai achar onde tem vazamento de memória, quando aconteceu e depois verificar se o código está “limpo”.
* Exemplo:  
  ~~~
  gcc -g main.c -o main
  valgrind --leak-check=full
  ./main
  ~~~
  O -g é para adicionar debug info.