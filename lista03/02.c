
#include <stdio.h>


void inv (char vet[], int n){
  int i=0, len=tamanho(vet,100);
  printf("",len);
  char vet2[len+1];
  while(len!=0){
   vet2[len]=vet[i];
   i++;
   len--;
  }
  printf("%s\n",vet2);
}  

int tamanho (char vet[], int n){
  int result=0, i=0;
  while(i!=n){
    if(vet[i]!='\0') {
      i++;
      result++;
    }
    else {
      i=n;
    }
  }
  return result;
}


int main()
{
  char vet[100];
  scanf("%s",vet);
  int len;
  inv(vet,100);
}

  
  
   
