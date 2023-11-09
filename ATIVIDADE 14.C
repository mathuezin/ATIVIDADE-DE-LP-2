#include <stdio.h>

int main() {
    int numero, soma_pares = 0, soma_impares = 0;
    int count_pares = 0, count_impares = 0;

    while (1) {
        printf("Digite um número inteiro (ou um valor negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;  
        }

        if (numero % 2 == 0) {
            soma_pares += numero;
            count_pares++;
        } else {
            soma_impares += numero;
            count_impares++;
        }
    }

    if (count_pares > 0) {
        double media_pares = (double)soma_pares / count_pares;
        printf("Quantidade de números pares: %d\n", count_pares);
        printf("Média dos números pares: %.2lf\n", media_pares);
    } else {
        printf("Nenhum número par inserido.\n");
    }

    if (count_impares > 0) {
        double media_impares = (double)soma_impares / count_impares;
        printf("Quantidade de números ímpares: %d\n", count_impares);
        printf("Média dos números ímpares: %.2lf\n", media_impares);
    } else {
        printf("Nenhum número ímpar inserido.\n");
    }

    return 0;
}
