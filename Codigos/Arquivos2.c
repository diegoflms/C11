// programa pra buscar nome (de dois em dois) especifico de uma lista
// primeiro compila, depois joga no terminal:
// ./arquivo <nome1> <nome1>.txt <nome2> <nome2>.txt resto.txt

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char nome[100];

    FILE *entrada = fopen("nomes.txt", "r");
    FILE *saida1 = fopen(argv[2], "w");
    FILE *saida2 = fopen(argv[4], "w");
    FILE *saida3 = fopen(argv[5], "w");

    while (fscanf(entrada, "%99[^\n]\n", nome) == 1) {
        if (strstr(nome, argv[1]))
            fprintf(saida1, "%s\n", nome);
        else if (strstr(nome, argv[3]))
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