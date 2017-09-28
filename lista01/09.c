#include <stdio.h>

int main()
{
   double temp;
   int opcao;
   printf("Digite um valor de temperatura: ");
   scanf("%lf", &temp);
   printf("Digite uma opção de conversão (1 de Celsius para Fahrenheit e 2 de Fahrenheit para Celsius): ");
   scanf("%d", &opcao);
   if (opcao==1 ) {
       temp=(1.8*temp)+(32.0);
       printf("A temperatura em Farenheit é: %.2f",temp);
   }
   else {
       temp=(temp-32.0)/1.8;
       printf("A temperatura em Celsius é:  %.2f",temp);
   } 
   return 0;
}