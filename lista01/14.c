#include <stdio.h>

int main()
{
   int soma, num, i;
   double media;
   soma=0;
   i=0;
     do{
          printf("Digite um valor inteiro: ");
          scanf("%d", &num);
          soma=soma+num;
          i=i+1;
     } while (i<=9);
     media=soma/10.0;
     printf("A soma é %d. A média é: %.1f .",soma,media);
   return 0;
}