#include <stdio.h>

int main()
{
   double temp;
   int opcao;
   printf("Digite um valor de temperatura: ");
   scanf("%lf", &temp);
   printf("Digite uma opção de conversão (1 de Celsius para Kelvin e 2 de Kelvin para Celsius): ");
   scanf("%d", &opcao);
   if (opcao==1 ) {
       temp=temp+273.15;
       printf("A temperatura em Kelvin é: %.2f",temp);
   }
   else {
       temp=temp-273.15;
       printf("A temperatura em Celsius é:  %.2f",temp);
   } 
   return 0;
}