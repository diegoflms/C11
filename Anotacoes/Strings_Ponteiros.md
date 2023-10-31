### Strings
* Toda string é um vetor de caracteres.
* Em C, é necessário reservar um "elemento" a mais quando definir uma string, para poder ser o \0 (é o "marcador" que indica quando a string acaba na linguagem).
* String literal: string constante, que não pode ter seu conteúdo alterado. `char nome = "diego";`.
* Vetor de caracteres: pode ter o conteúdo alterado. `char nome[6] = {d, i, e, g, o}; ou char nome[] = "diego";`.
* A variável do vetor pode ser considerado como um ponteiro para o primeiro elemento (começo do vetor).
* Vetor de strings:
  ~~~
  char letras[][4] = {"abc", "def"};
  printf("%s", letras[1]); // imprime "def"
  O primeiro colchete diz quantas strings e o segundo limita o tamanho delas.
  ~~~
---
### Biblioteca <string.h>
* _strchr()_
    * Verifica se um caractere está em uma string e devolve o endereço do primeiro valor encontrado que satisfaz, se não achar retorna nil.  
      `strchr("diego", 'e'); // retorna número foda-se`
* _strcmp()_
    * Compara duas strings: retorna 0 se forem iguais, < 0 se a primeira for menor e > 0 se a primeira for maior.  
      `strcmp("abc", "ab"); // retorna > 0`
* _strncmp()_
    * Compara duas strings. Retorna 0 se for igual, < 0 se a primeira for menor e > 0 se a primeira for maior, porém com o tamanho a ser comparado especificado.  
      `strcmp(“abc”, “abcd”, 3); // retorna 0`
* _strstr()_
    * Verifica se uma string está dentro de outra e devolve o endereço, se não estiver devolve nil.  
      `strstr("diego", "di"); // retorna número foda-se`
* _strcpy()_
    * Copia o conteúdo de uma string para outra.  
      `strcpy(nome, "diego"); // nome vai ser igual à “diego”`
* _strncpy()_
    * Copia o conteúdo de uma string para outra string, porém com o tamanho a ser copiado especificado.  
      `strncpy(nome, "diego", 4); // nome vai ser igual à "dieg, não esquecendo de definir o último caractere como \0`
* _strlen()_
    * Devolve o tamanho da string.  
      `tam = strlen(nome); tam = tamanho da string`
* _strcat()_
    * Concatena duas strings.
    ~~~
    char teste[220] = "lemos";
    strcat(teste, " diego"); // saída é lemos diego
    ~~~
* _strncat()_
    * Concatena duas strings, porém com o tamanho a ser concatenado especificado.
    ~~~
    char teste[220] = "lemos";
    strncat(teste, " diego", 4); // saída é lemos die (o espaço kkj)
    ~~~
---
### Ponteiros
* Ponteiro representa (armazena) o endereço de memória de uma variável (quem está sendo apontado).
  ~~~
  int x = 4;
  int *end_x = &x; // & pega um dado e diz onde está armazenado
  int valor = *end_x; // 4, * pega um endereço e diz o que está armazenado
  int pos_mem = end_x; // número foda-se
  ~~~
* Pode mudar o conteúdo da variável através do ponteiro:
  ~~~
  int x = 4;
  int *end_x = &x;
  *end_x = 5;
  ~~~
* Operações com ponteiros:
    * Só pode adicionar e subtrair valores inteiros.
    * Não pode realizar operações com _float_ nem _double_.
    * A operação depende do tipo (incremento em _int_ são 4 bytes). Aliás esse é o motivo do ponteiro ter tipo definido.
    * Para incrementar um ponteiro precisa de parênteses.
* Ponteiro para ponteiro:
  ~~~
  int x = 4;
  int *p1 = &x;
  int **p2 = &p1;
  printf("endereco em p2: %p\n", p2); // número foda-se
  printf("endereco em p2: %p\n", *p2); // número foda-se
  printf("endereco em p2: %d\n", **p2); // 4
  ~~~
* Pode-se definir um ponteiro como _void_, porém para acessá-lo tem que converter para o tipo que se deseja trabalhar usando cast.
* Vetor de ponteiros:  
  Semelhante ao vetor de strings (pq, novamente, uma string é um ponteiro).
  ~~~
  char *letras[] = {"abc", "def"};
  printf("%s %p", letras[1], letras[1]); // imprime "def" e um número foda-se
  O primeiro colchete diz quantas strings e o segundo limita o tamanho delas (segundo é o ponteiro).
  ~~~
* Diferença entre string(vetor) e ponteiro:
    * Considere `char nome[] = "diego"; e int *p = nome;`
    * Tamanho (a string retornaria 6 bytes e o ponteiro 4).
    * `printf("%p == %p, %p != %p", &nome, nome, &p, p);`
    * A string não aponta para nenhum outro lugar.
* Igualdades entre string(vetor) e ponteiro:
  ~~~
  // nome[0] = *nome
  // nome[2] = *(nome + 2)
  // nome[3] = *(nome + 3) = 3[nome]
  // &nome[0] = nome
  // &nome[1] = (nome + 1)
  char nome[] = "diego";
  printf("%d %d\n", nome[0], *nome);
  printf("%d %d\n", nome[2], *(nome+2));
  printf("%d %d\n", nome[3], 3[nome]);
  printf("%p %p\n", &nome[0], nome);
  printf("%p %p\n", &nome[1], (nome+1));
  ~~~