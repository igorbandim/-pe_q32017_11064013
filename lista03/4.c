
#include <stdio.h>



void lerarray(int vet[][3],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
     scanf("%d",&vet[i][j]); 
    }
  }
}

void imprimearray(int vet[][3],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
     printf("%d ",vet[i][j]); 
    }
    printf("\n"); 
  }
  printf("\n");
}

void trans(int vet[][3],int n){
  int troca;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<3;j++){
     troca = vet[i][j];
     vet[i][j]=vet[j][i];
     vet[j][i]=troca;
    }
  }
  imprimearray(vet,3);
}
  



int main()
{
  int vet[3][3];
  lerarray(vet,3);
  trans(vet,3);
}



  
  
   
