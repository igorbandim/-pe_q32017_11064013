
#include <stdio.h>


int fat (int n){
  if (n==0) return 1;
  else return n*fat(n-1);
}

int binomial (int n, int k){
  if (k>n) return 0;
  else return fat(n)/(fat(k)*fat(n-k));
}

int main()
{
   int n,k,result;
   scanf("%d %d",&n,&k);
   result = binomial(n,k);
   printf("%d\n", result);
   return 0;
}