
#include <stdio.h>

int fatorial(int n)
{
   if (n==0) return 1;
   else{
     int fat=1,i=n;
     while(i!=1) {
         fat=fat*i;
         i=i-1;
     }
    return fat; 
   }
}

int binomial(int n, int k){
   if (n<k) return 0;
   else {
     int bin;
     bin= fatorial(n)/(fatorial(k)*fatorial(n-k));
     return bin;
   }   
}

int main()
{
   int n,k,result;  
   scanf("%d %d",&n,&k);
   result=binomial(n,k);
   printf("%d\n",result);
   return 0;
}