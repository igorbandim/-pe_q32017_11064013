#include <stdio.h>

int main()
{
   int soma, num, i;
   printf("Digite um valor inteiro maior ou igual a 1: ");
   scanf("%d", &num);
   soma=0;
   i=0;
     do{
        soma=soma+i;
        i=i+1;
     } while (i<=num);
     printf("A soma de Gauss é:  %d",soma);
   return 0;
}