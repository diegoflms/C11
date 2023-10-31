// separar números por maior ou igual a x (no exemplo, 0) ou menor

#include <stdio.h>
#include <string.h>
#define MAX 10

int main() {

    // declara o vetor dos num
    int num[MAX];

    // cria a DS de entrada (de onde vem os numeros) e as de saida (para separar nos dois "tipos" citados acima)
    FILE *entrada = fopen("num.txt", "r");
    FILE *saida1 = fopen("maior.txt", "w");
    FILE *saida2 = fopen("menor.txt", "w");

    // lê e separa (pelo if), depois printa
    for (int i = 0; i < MAX; i++) {
        fscanf(entrada, "%d", &num[i]);
        if (num[i] >= 0)
            fprintf(saida1, "%d\n", num[i]);
        else
            fprintf(saida2, "%d\n", num[i]);
    }

    // fecha as DS
    fclose(entrada);
    fclose(saida1);
    fclose(saida2);
    return 0;
}