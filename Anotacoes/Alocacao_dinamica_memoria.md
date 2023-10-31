### Memória
* Memória é divida em 5 partes:
  * Stack: armazenar variáveis locais (variáveis declaradas dentro das funções). A memória é liberada automaticamente quando sai da função.
  * Heap: armazenar memória dinâmicamente, memória alocada em tempo de execuçãoo e não é liberada automaticamente.
  * Globals: armazenar variáveis fora de funções, são criadas quando o programa inicia e podem ser modificadas.
  * Constants: igual ao "Globals", porém não podem ser modificadas (strings literais, por exemplo).
  * Code: armazena o código assembly, read only também.
---
### Alocação dinâmica
* Alocação dinâmica acontece através das funções da biblioteca stdlib.h, alocando vetores.
* Funções:
  * _malloc()_  
    Retorna um ponteiro void (por isso usar typecast) para a heap. Se não houver memória retorna NULL.  
    ~~~
    int *p;
    p = (int *) malloc(50*sizeof(int));
    ~~~
  * _calloc()_  
    Mesma coisa do malloc(), a diferença é que inicializa os bytes com 0, ou seja, se tentar ler logo depois de inicializar vai ler 0 (malloc() seria lixo de memória).
    ~~~
    int *p;
    p = (int *) calloc(50, sizeof(int));
    ~~~
  * _realloc()_  
    Realoca o que foi previamente alocado com malloc() ou calloc().  
    Devolve um ponteiro, se receber um ponteiro nulo, irá alocar os N bytes e devolver o ponteiro.  
    Se recebe 0 de espaço a memória apontada pelo ponteiro passado é liberada (igual o free()).  
    Se não tiver memória suficiente, devolve um ponteiro NULL (para malloc() e calloc() também).
    ~~~
    int *p;
    int *p_novo;
    p = (int *) malloc(50*sizeof(int));
    p_novo = (int *) realloc(p, 51*sizeof(int));
    ~~~
  * _free()_  
    Desaloca (libera) a memória alocada dinamicamente, na heap.
    ~~~
    int *p;
    p = (int *) malloc(50*sizeof(int));
    free(p);
    ~~~
* Outra função (do string.h) que pode ajudar é o _strdup()_. Ela copia a string para a heap (com alocação dinâmica, logo tem que desalocar). Exemplo usado no livro (preguia de trazer para cá) é com _struct_:  
  ~~~
  char *s = “diego”;
  char *copy = strdup(s);
  free(s);
  ~~~
* Ainda é possível fazer alocação dinâmica de matriz e de struct, mas fiquei com preguiça.