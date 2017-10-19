#include <stdio.h>

int fibMem[1000];

int fib(int n) {
  if(fibMem[n]==NULL) {
    fibMem[n] = fib(n-1) + fib(n-2);
  }
  return fibMem[n];
}

int main(){
  fibMem[0] = 0;
  fibMem[1] = 1;
  fibMem[2] = 1;
  int n;
  scanf("%d", &n);
  printf("%d\n", fib(n));
  return 0;
}