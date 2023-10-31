### Arquivos
* Standard Input: teclado, fonte do _scanf()_ e afins (por onde função lê).
* Standard Output: tela, fonte do _printf()_ e afins (onde escreve).
* Standard Error: tela, é o segundo output padrão, criado para enviar mensagens de erro.
* Redirecionar Standard Input (no wsl): `./teste < input.txt`
* Redirecionar Standard Output (no wsl): `./teste > output.txt`, não precisa criar o arquivo.
* Redirecionar Standard Error (no wsl): `./teste 2> error.txt`
* Toda data stream (acima) é representada como um ponteiro para um arquivo.
---
### Funções (stdio.h)
* _fopen()_
    * Cria uma nova data stream.
  ~~~
  FILE *in_file = fopen("input.txt", "r"); // cria uma DS para ler um arquivo.
  FILE *out_txt = fopen("output.txt", "w"); // cria uma DS para escrever em um arquivo.
  ~~~
  Pode ser por caminho relativo (no exemplo ou ..\\dados.txt) ou caminho absoluto (C:\\Projetos\\dados.txt).
* _fclose()_
    * Fecha a DS aberta (existe uma quantidade limitada).
* Lista de modos: https://www.google.com/search?q=lista+de+modos+FILE+em+c&sca_esv=577907868&tbm=isch&source=lnms&sa=X&ved=2ahUKEwj13sPzx56CAxXxqpUCHaSkDOsQ_AUoAXoECAEQAw&biw=1536&bih=754&dpr=1.25#imgrc=R7ZOS0KeqS7jTM
* _fprintf()_
    * Imprime podendo escolher o output.  
      `fprintf("saida", "oi %d", 12);`
* _fscanf()_
    * Lê podendo escolher o output.  
      `fscanf("entrada", "%d", nome);`
> No arquivo "Arquivos1.c" tem uma aplicação detalhada do que foi até agora.
---
### Command-line argumment
* Fornece a capacidade de mudar a maneira que o programa funciona (obviamente, o programa precisa ter "suporte" para tal).
* São os dados que vem depois do comando de execução (./teste ...).
* Lê esses dados através da _main()_, passando como parâmetro uma array de strings e a quantidade de elementos dessa array:  
  `int main(int argc, char *argv[]) {`
* O primeiro elemento é o comando de execução em si.
> No arquivo "Arquivos2.c" tem uma aplicação disso.
---
### Command-line options
* São os switches (prefixo -). Informam uma ação (a ser definida no código, opção).
* Aparecem entre o comando de execução e os command-line argumments.  
  `./teste -f -g -- diego nome.txt`  
  O "--" informa à função _getopt()_ (abaixo) que deve parar de ler a linha de comando.
* _getopt()_ (biblioteca <unistd.h>)
  * Lê a linha de comando e retorna a próxima opção (command-line option) que achar (retorna como char).  
    `getopt(argc, argv, "fg") // f e g são os switches válidos`
  * Se para a opção for necessário um argumento, se usa o ":" acompanhado ("f:g", para quando f precisa de argumento). A função aponta para esse argumento com a variável _optarg_.
* Quando usar command-line options com command-line arguments, para não ter as opções consideradas e pulá-las, é necessário, depois que elas forem lidas, usar a seguinte sequência de código:  
  ~~~
  argc -= optind;
  argv += optind;
  ~~~
  O optind armazena o número de strings lidas como opção na linha de comando.
  Após isso, o argv[0] passa a ser o primeiro argumento passado, não mais o comando de execução.
> No arquivo "Arquivos3.c" tem uma aplicação disso.