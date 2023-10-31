### Informações básicas
* Nome da variável pode conter letras, números e “_”, mas não pode começar com um número.
* Para saber informações sobre as faixas de valores das variáveis (varia de PC para PC), basta verificar o arquivo `tamanho_tipo.c`.
* Bitfield: limitar a quantidade de bits da variável (quando só quer guardar verdadeiro ou falso, ou um número de até 50, por exemplo):  
  `unsigned int teste.1; // limitado a um bit`
---
### "palavras chave"
* _char_: apenas caracteres, todo _char_ é armazenado na memória com um código char da tabela ASCII.
* _int_: valores inteiros.
* _short_: _int_ com a faixa de valores reduzida pela metade (costuma ser assim). Escrever _short int_ é trivial.
* _long_: _int_ com a faixa de valores dobrada (costuma ser assim). Pode usar long no _double_ e no _long_ em si (no _int_ é trivial).
* _float_: números com vírgula.
* _double_: grandes números com vírgula.
* _const_: não pode ser alterada durante o programa.
* _signed_: faixa de valor das variáveis é tanto positiva quanto negativa.
* _unsigned_: faixa de valor das variáveis é somente positiva.
* _extern_: deixa a variável ser manipulada em diferentes arquivos.
* typecast: mudar o tipo da variável momentaneamente.
  ~~~~
  int k;  
  float c = 9.8;  
  k = (int) c;  
  "c" é igual à 9.
  ~~~~