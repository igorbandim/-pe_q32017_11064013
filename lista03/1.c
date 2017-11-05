
#include <stdio.h>


int vogal(char vet[], int n){
  int num=0, i=0;
  while (i!=n){
    if(vet[i]=='a' ||vet[i]=='e' ||vet[i]=='i' ||vet[i]=='o' ||vet[i]=='u') num++;
    i++;
    if (vet[i-1]=='\0') i=n;
  }
  return num;
}  


int main()
{
  char vet[100];
  int result;
  scanf("%s",vet);
  result=vogal(vet,100);
  printf("%d",result);
  return 0;
}

  
  
   
