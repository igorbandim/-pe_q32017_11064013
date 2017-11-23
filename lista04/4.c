#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
  if(x == 0)
    return 0;
  while(x != 1) {
    if(x%2 == 1)
      return 0;
    x = x/2;
  }
  return 1;
}

ulint f2(ulint x)
{
  return x && !(x & (x - 1));
}

int main(void) {
  clock_t tempoinit, tempofim;
  double tempogasto;
  ulint n = 335544345612084422;
  tempoinit = clock();
  for(int i = 0; i < 9999999; i++) {
    f1(n);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempogasto);

  tempoinit = clock();
  for(int i = 0; i < 9999999; i++) {
    f2(n);
  }
  tempofim = clock();
  tempogasto = (double) (tempofim - tempoinit)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempogasto);
  return 0;
}