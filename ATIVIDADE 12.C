#include <stdio.h>

int main() {
    int quantidade_notas;
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &quantidade_notas);

    if (quantidade_notas <= 0) {
        printf("Quantidade inválida. Encerrando o programa.\n");
        return 1; 
    }

    double soma = 0.0;  

    for (int i = 1; i <= quantidade_notas; i++) {
        double nota;
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);
       
        soma += nota; .
    }

    double media = soma / quantidade_notas;

    printf("A média das %d notas é: %.2lf\n", quantidade_notas, media);

    return 0;
}
