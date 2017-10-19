#include <stdio.h>


int pal(int num,int base){
  if (num<10) return 10*base+num;
  else{
    base=10*base+(num%10);
    return pal(num/10,base);
  }
}




int main()
{
   int num,inv ;
   scanf("%d",&num);
   inv = pal(num,0);
   if(inv==num) printf("sim\n");
   else printf("nao\n");
    
}