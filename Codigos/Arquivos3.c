// programa pra buscar nome (de dois em dois) especifico de uma lista, porem com uma opção de resenha
// primeiro compila, depois joga no terminal:
// ./arquivo -f TREZENTOS -g <nome1> <nome1>.txt <nome2> <nome2>.txt resto.txt

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char ch;
    char *caneco = "";
    while ((ch = getopt(argc, argv, "f:g")) != EOF)
    switch (ch) {
        case 'g':
            printf("só para usar a SO padrão\n");
            break;
        case 'f':
            caneco = optarg;
            printf("botafogo merecia ter %s titulos\n", caneco);
            break;
    }
    argc -= optind;
    argv += optind;

    char nome[100];

    FILE *entrada = fopen("nomes.txt", "r");
    FILE *saida1 = fopen(argv[1], "w");
    FILE *saida2 = fopen(argv[3], "w");
    FILE *saida3 = fopen(argv[4], "w");

    while (fscanf(entrada, "%99[^\n]\n", nome) == 1) {
        if (strstr(nome, argv[0]))
            fprintf(saida1, "%s\n", nome);
        else if (strstr(nome, argv[2]))
            fprintf(saida2, "%s\n", nome);
        else
            fprintf(saida3, "%s\n", nome);
    }
    fclose(entrada);
    fclose(saida1);
    fclose(saida2);
    fclose(saida3);
    return 0;
}