#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
  ulint soma = 0;
  while(x!=0) {
    soma = soma + x%2;
    x = x/2;
  }
  return soma;
}

ulint f2(ulint x)
{
  ulint soma = 0;
  while(x!=0) {
    soma =soma+ x & 1;
    x = x >> 1;
  }
  return soma;
}

int main(void) {
  clock_t tempoinit, tempofim;
  double tempogasto;
  ulint n = 4;
  tempoinit = clock();
  for(int i = 0; i < BIGNUM; i++) {
    f1(n);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempogasto);

  tempoinit = clock();
  for(int i = 0; i < BIGNUM; i++) {
    f2(n);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempogasto);
  return 0;
}