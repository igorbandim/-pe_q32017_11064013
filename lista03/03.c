
#include <stdio.h>



void lervetor(int vet[],int n){
  for(int i=0;i<n;i++){
     scanf("%d",&vet[i]);
  }
}

void imprimevetor(int vet[],int n){
  for(int i=0;i<n;i++){
     printf("%d ",vet[i]);
  }
  printf("\n");
}

void somavet(int v1[], int v2[], int n){
  int v3[n];
  for(int i=0;i<n;i++){
     v3[i]=v2[i]+v1[i];
  }
  imprimevetor(v3,n);
}


int main()
{
  int vet1[5],vet2[5];
  lervetor(vet1,5);
  lervetor(vet2,5); 
  somavet(vet1,vet2,5);
}

  
  
   
