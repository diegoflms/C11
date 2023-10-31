### Informações básicas
* Linguagem de nível médio (mais baixo nível que Python, por exemplo).
* Linguagem estruturada: não tem/não usa goto e sim estruturas (funções) de entrada e saída.
* 32 palavras reservadas no C ANSI (não achei para o C11).
* É case sensitive.
---
### Compilador
* A compilação ocorre quando roda o arquivo _.c_ no compilador.
* Se não houver erro na compilação, vai ser gerado um executável _.exe_.

1. O compilador é uma ferramenta necessária para fazer o programa _.c_ funcionar. Não se limitando a isso, também ajuda a fazer com que o código seja executado mais rápido, gerando mais eficiência.
2. O compilador usado é o _gcc_ (Gnu Compiler Collection).
3. A Compilação é dividida em quatro etapas:
    1. Preprocessing: ajusta a fonte do código, adicionando os header files que foram declarados no começo através do `include`, só depois que terminar pode começar a compilação em si.
    2. Compilação: traduzir o código escrito para assembly, obtendo as instruções passo-a-passo do que fazer.
    3. Assembly: traduzir o código em assembly para código objeto (binário).
    4. Linking: juntar os códigos objeto obtidos em um arquivo executável (_.exe_).
---
### Sintaxe básica
* Ponto e vírgula é usado para sinalizar o fim de uma instrução.
* Chaves indicam o início e fim de um bloco de instruções.
* Texto é em aspas duplas.
* Caractere é em aspas simples.
---
### Estrutura básica do código
* Comentários: texto ignorado pelo compilador, usado para explicar. // ou /* *\ .
* Diretivas: bibliotecas externas que definem quais funções são utilizadas.
* Funções: onde vai realmente acontecer as ações (código em si). Todo programa em C começa pela _main()_.