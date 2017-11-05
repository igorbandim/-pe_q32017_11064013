#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b){
  return (*(int *)a - *(int *)b);
}

int main()
{
  unsigned n;
  scanf("%u", &n);
  int *vetor = malloc(n*sizeof(int));
  for(int i = 0; i<n; i++) {
    scanf("%d", vetor+i);
  }
  qsort(vetor, n, sizeof(int), cmpfunc);
  if(n%2==1) {
    printf("%.2f\n", (double)vetor[n/2]);
  } else {
    printf("%.2f\n", (double)(vetor[(n-1)/2]+vetor[n/2])/2.0);
  }
  return 0;
}