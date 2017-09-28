
#include <stdio.h>

int main()
{
   int inf, sup, soma1,soma2, dif;
   soma1=0;
   soma2=0;
   printf("Digite o intervalo inferior: ");
   scanf("%d", &inf);
   printf("Digite o intervalo superior: ");
   scanf("%d", &sup);
   do{
     soma1=soma1+inf*inf;
     soma2=soma2+inf;
     inf=inf+1;
   } while(inf<=sup);
   soma2=soma2*soma2;
   dif=soma2-soma1;
   printf("A soma dos quadrados é %d, o quadrado da soma é %d, e a diferença é %d.",soma1,soma2,dif);
   return 0;
}
        
 