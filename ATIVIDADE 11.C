#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char codigo;
    char codigosalvo = '7';

    printf("DIGITE O CODIGO DE ACESSO:\n");
    scanf(" %c", &codigo); 

    if (codigo == codigosalvo) {
        printf("BEM-VINDO!\n");
    } else {
        printf("OPÇÃO INVÁLIDA\n");
    }

    return 0;
}