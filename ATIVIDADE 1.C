#include <stdint.h>
#include <stdio.h>

int main()
{

    int temperatura;

    printf("Jarvis qual temperatura externa?:");
    scanf("%d", &temperatura);

system("cls || clear");

    if (temperatura > 25)
    {
        printf("Javis: o ceu esta ensolarado senhor");
    }
    else if (temperatura < 15)
    {
        printf("Javis: o ceu esta chuvoso");
    }
   else if (temperatura > 15 || temperatura < 25 )
   {
      printf("Javis: o ceu esta nublado");
   }
   
    return 0;
}