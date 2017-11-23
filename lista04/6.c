#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{
  ulint m, n;
  if(x>y) {
    m = x;
    n = y;
  } else {
    m = y;
    n = x;
  }
  //printf("maior= %d e menor= %d\n", m, n);
  return 0;
}

ulint f2(ulint x, ulint y)
{
  ulint m, n;
  m = x ^ ((x ^ y) & -(x < y)); // Encontra o max entre x e y;
  n = y ^ ((x ^ y) & -(x < y)); //Encontra o min entre x e y;
  //printf("maior= %d e menor= %d\n", m, n);
  return 0;
}

int main(void) {
  clock_t tempoinit, tempofim;
  double tempogasto;
  ulint x = 4;
  ulint y = 15;
  tempoinit = clock();
  for(int i = 0; i < 1000000000; i++) {
    f1(x, y);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempogasto);

  tempoinit = clock();
  for(int i = 0; i < 1000000000; i++) {
    f2(x, y);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempogasto);
  return 0;
}