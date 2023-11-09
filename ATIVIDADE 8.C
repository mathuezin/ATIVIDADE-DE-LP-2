#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
    } else {
        printf("Contagem regressiva:\n");
        while (numero >= 0) {
            printf("%d\n", numero);
            numero--;
        }
    }

    return 0;
}