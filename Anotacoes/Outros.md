### Boa prática
* Comentar e documentar o código.
* Retornar 0 na _main()_.
* Ter valores de erros definidos (por exemplo, quando um arquivo não abre ou quando não tem espaço na heap suficiente).
* Quando associar um ponteiro a uma string literal, definir como _const_.
---
### ""Terminal""
* Small tool: programa em C que faz UMA tarefa BEM FEITA.
* Pipe: conectar small tools (a saída de uma na entrada de outra), uma série de processos conectados.  
  O arquivo de saída já sai no tipo de arquivo que o segundo exige (se estiver formatado).  
  Comando:  
  `(./teste1 | ./teste2) < entrada.txt > saida.txt`
* Ao executar o programa com um output diferente da tela, para ter certeza que deu certo basta rodar echo $? que irá mostrar (na tela) o return do programa.
* `system(“pause”);` Aguarda um enter do usuário para continuar.
* `system(cls);` Limpa a tela.
* “ctrl + c” encerra o programa, sai do loop.
---
### Sobre C
* Conversão de tipo implícita: quando tem variáveis/constantes de tipos diferentes, o conteúdo da variável de menor tamanho é convertido ao tipo da variável de maior tamanho.
* Conversão de tipo explícita: `cast, (float) (x/2);`
* Permite chain assignments: `int x, y; x = y = 4;`
* Pode fazer vetor com quase todo tipo.
* Decay: perda de informação quando associar a array a um ponteiro, pq o ponteiro só irá conter o endereço da array.
---
### Outras infos true
* Diferença entre função e operador: o operador é compilado por uma sequência de instruções pelo compilador, a tempo de compilação. A função tem que pular para outro pedaço do código quando é chamada.
* Parâmetro é o que passa, argumento é o que recebe.
---
### Dicas
* Quando é necessário manipular (usar, alterar o valor) uma variável entre diferentes funções, uma opção é declará-la fora de nenhuma função (global scope, global variable), assim ela estará disponível para todas as funções do programa.
* Para ler todas as linhas de um arquivo usa while() com scanf().
* Todo programa precisa dar ao usuário a capacidade de mudar o jeito que o mesmo funciona.
* Todo programa precisa dar ao usuário a capacidade de selecionar opções do mesmo.
* Usa char pointer (`char *c;`) ao invés de vetor (`char c[10];`) pra nao ter que definir o tamanho já.