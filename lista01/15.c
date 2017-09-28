
#include <stdio.h>

int main()
{
   int num, aux;
   printf("Digite um valor inteiro: ");
   scanf("%d", &num);
   if(num<=100){
        if(num%2==1){
              num=num+1;
        }
        aux=num; 
        if(num%2==1){
             num=num+1;     
        }  
        do{
             printf("%d ",aux);  
             aux=aux+2;   
        } while(aux<=100);
   }    
   if(num>100){
        aux=100;
        if(num%2==1){
              num=num-1;
        }
        if(num%2==1){
              num=num-1;
        }
        do{
              printf("%d ",aux);
              aux=aux+2;
        } while(aux<=num);
  }    
   return 0;
}
        
 