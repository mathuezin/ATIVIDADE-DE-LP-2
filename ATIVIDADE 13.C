#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
   
    int num1, num2;

    printf("Digite o primeiro número: \n");
    scanf ("%d", &num1);
   
    printf("Digite o segundo número: \n");
    scanf ("%d", &num2);
   

    system("cls || clear");

    printf("Primeiro número: %d \n", num1);
    printf("Segundo número: %d \n", num2);

    printf("\n");

    if (num1 > num2)
    {
        printf("O número maior é: %d \n", num1);
    }
    else if (num2 > num1)
    {
        printf("O número maior é: %d \n", num2);
    }
   
    
     if (num1 < num2)
    {
        printf("O número menor é: %d \n", num1);
    }
    else if (num2 < num1)
    {
        printf("O número menor é: %d \n", num2);
    }


    return 0;
} 