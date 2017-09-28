
#include <stdio.h>

int main()
{
   int pot,num1,num2,y2;
   pot=1;
   printf("Digite o 1o. numero: ");
   scanf("%d", &num1);
   printf("Digite o 2o. numero: ");
   scanf("%d", &num2);
   y2=num2;
   
   repita:
   pot=pot*num1;
   num2=num2-1;
   if (num2>0){
       goto repita;
   }
   if (num2<0){
       pot=1;
   }
   printf("O número %d elevado a %d é igual a %d.",num1,y2,pot);
   
   

   return 0;
}