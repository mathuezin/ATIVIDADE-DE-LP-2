#include <stdint.h>
#include <stdio.h>

int main()
{
 int opcao;
    
   
printf("|1| Novo jogo\n");
printf("|2| Carregar jogo\n");
printf("|3| Configuracoes\n");


printf("Digite a Opcao:\n");
scanf("%d",&opcao);

system("cls || clear");

switch (opcao)
{
case 1:
    printf("Opcao selecionada: Novo jogo\n");
    printf("escolha a dificuldade\n");
    printf("FACIL\n");
    printf("MEDIO\n");
    printf("DIFICIL\n");
    break;
case 2:
    printf("Opcao selecionada: CARREGAR SAVE\n");
    printf("SELECIONE O SAVE\n");
    printf("CHAPTER 1\n");
    printf("NOVO SAVE\n");
    break;
case 3:
    printf("Opcao selecionada: OPCOES\n");
    printf("IDIOMA\n");
    printf("CONTROLES\n");
    printf("VOLUME\n");
    break;
default:
printf ("codigo digitado invalido:");
break;
}
   
    return 0;
}