#include<stdio.h>

int paridade (int n){
    if(n%2!=0){
        return 1;
    }
    else return 0;
}

int main() {
   int n, parid;
   scanf("%d",&n);
   parid=paridade(n);
   printf("%d\n",parid);
   
}
