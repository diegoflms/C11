### struct (tipo de dado estruturado)
* Junta diferentes tipos de dado em um único novo tipo, a ser definido.
  ~~~
  struct pessoa {  
      int idade;  
      float peso;  
  };  
  ~~~
  Onde "pessoa" é o nome do novo tipo, que contém a idade (_int_) e o peso (_float_).
* Para acessar uma variável dentro de uma _struct_ usa o ponto (".").
  ~~~
  struct pessoa {
      int idade;
      float peso;
  };
  struct pessoa diego;
  diego.idade = 18+1;
  ~~~
  Quando trabalhando com ponteiros, usa "->" ou "(*p)" ao invés do ponto.
* Ao invés de atribuir cada variável de uma struct uma por uma, pode inicializar em uma linha:  
  `struct pessoa diego = {18+1, 70.5};`
* Uma última maneira é usando designed initializers:  
  `struct pessoa diego = {.peso=70.5};`
* Quando trabalhar com _struct_ dentro de _struct_, para acessar se usa o operador mais de uma vez e para inicializar "por linha", coloca uma "chave dentro de chave".
* _struct_ recursiva é uma _struct_ que, em suas variáveis, tem um link (ponteiro) para outra _struct_ do mesmo tipo.
  ~~~
  typedef struct pessoa {
      int idade;
      float peso;
      struct pessoa prox;
  } pessoa;
  ~~~
  A _struct_ não tá com o "nome oculto" pq é recursiva.  
  Isso ai é conteúdo pra ED, então não vou me estender aqui com exemplos.
---
### typedef
* _typedef_ é usado para encurtar tempo e facilitar a visualização do código.
* Para usar, coloca _typedef_ antes de _struct_ (o que está "definindo" o novo tipo) e o "nome do tipo" depois que fechar a chave.
  ~~~
  typedef struct {  
      int idade;  
      float peso;  
  } pessoa;  
  pessoa diego;
  ~~~  
  Não precisa escrever o nome do novo tipo depois de "struct" pq já vai repetir no final.
---
### union
* Diferença de _union_ para _struct_ é que só um tipo das variáveis de dentro do _union_ pode ser atribuída ao novo tipo que está sendo criado.
    ~~~
  typedef union {  
      int idade;  
      double peso;  
  } pessoa;
  ~~~  
* Vai definir espaço igual à maior variável (nesse caso o double).
* Pode definir o valor da _union_ das mesmas maneiras que para _struct_ (lembrando que na _union_ só se usa um valor).  
  Quando não usar só a chave (sem o designed initializer), vai ser atribuído para a primeira variável.  
  `pessoa diego = {4};`  
  Boa prática sempre usar designed initializer para não acabar definindo um valor para o tipo errado por engano.
---
### enum
* Define um novo tipo que contém um conjunto de valores, quando uma variável desse novo tipo é associada a um valor que não está nesse conjunto, não vai ser compilada.
  ~~~
  typedef enum {a, b, c} letras;  
  letras A = 'a'; // é compilado
  letras J = 'j'; // não é compilado  
  ~~~