### Funções
* Formato:
  ~~~
  int dobro (int x) {   // tipo, nome, parâmetros
  return x*2;           // ações e o return (do tipo da função)
  }
  ~~~
* _return_ é o valor da função em si.
* Quando não deseja que a função retorne nada, basta declarar como _void_.
* Se o parâmetro é uma string (_char nome[]_), _nome_ vai ser tratado como ponteiro.
* No parâmetro, é enviado uma cópia do valor, não o valor em si. Ou seja, para manipular uma valor declarado em outro lugar, é necessário passar seu endereço como argumento e um ponteiro como parâmetro. `char nome[] e *nome` são equivalentes quando passados como parâmetros.
---
### Controle de fluxo
* if:
  ~~~
  if (condição)
      declaração;
  else if (condição)
      declaração;
  else
      declaração;
  ~~~
* switch:
  ~~~
  switch (variável) {
  case const:
      declaração;
      break;
  default:
      declaração;
  ~~~
  Executa quando a variável (valor unitário) for igual ao _case_, só sai quando vê um _break_.
* for:  
  `for (int i = 0; i < 10; i+=2)`  
  Bom quando sabe o número de repetições.
* while:  
  `while (condição) declaração;`
* do:
  ~~~
  do {
  declaração;
  } while (condição);
  ~~~
  É um _while_ que garante que ocorre pelo menos uma vez.
* _break_ faz sair de loops e _switch_.
* _continue_ faz para pular, continuar, em loops, para testar de novo.
---
### Input e Output (biblioteca <stdio.h>)
* _printf()_
    * Imprime na tela, string de controle e argumentos.
* _scanf()_
    * Lê um dado e armazena (através de &), string de controle e argumentos.
    * Gambiarra para ler strings com espaço:
  ~~~
  scanf("%[^\n]", x);
  setbuf(stdin, NULL);
  ~~~
    * Tem que limitar os caracteres lidos (string) na mão para não sobrescrever memória.  
      `scanf(%19s", x);`
    * Retorna o número de valores lidos.
* _fgets()_
    * Um _scanf()_, porém só com strings.
  ~~~
  char nome[5];
  fgets(nome, sizeof(nome), stdin);
  ~~~
    * Quando passar o tamanho, o próprio _fgets()_ já deixa reservado o espaço do \0.
* _puts()_
    * Escreve uma string com \n.  
      `puts(nome);`