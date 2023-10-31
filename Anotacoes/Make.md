### Make
* make é uma ferramenta que roda os comandos de compilação de uma maneira automatizada.
* O make consegue verificar se o tempo dos arquivos fonte (.c) e dos arquivos gerados (.o) e só recompilar de estiver desatualizado.
* Formato:
  * Alvo: todo arquivo compilado pelo make, qualquer arquivo gerado a partir de outro arquivo.
  * Dependências: quais arquivos geraram o alvo.
  * Receita: conjunto de instruções que vão ser executadas para gerar o arquivo.
  * Regra: dependências + receita + alvo, fala para o make tudo o que ele precisa saber para criar o arquivo alvo.
  * Exemplo de regra:  
    ~~~
    alvo: dependências
        receita
    ~~~
---
### Makefile
* Usado (não só para isso) para armazenar as regras.
* Exemplo prático:
  ~~~
  all: aux.o main.o
      gcc aux.o main.o -o teste -std=c11 -Wall
  
  aux.o: aux.c aux.h
      gcc -c aux.c
  
  main.o: main.c aux.h
      gcc -c main.c
  
  clean:
      rm *.o teste
  
  run:
      ./teste
  ~~~
* Para executar a regra, basta "make + regra" no terminal. Apenas "make" executa a primeira.
* Tem que usar tab, não espaço.
* Explicação linha-a-linha:
  * aux.o e main.o: o "-c" diz ao compilador para criar o .o de cada um desses arquivos (*.c refere a todos do diretório), mas sem juntar em um programa executável.
  * all: linka (com o -o: output file) os .o que foram criados. o std informa a versão que deve ser compilado e Wall é (warnings all).
  * clean: remove todos os .o
  * run: executa