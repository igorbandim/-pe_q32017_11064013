#include <stdio.h>
#include <stdio.h>

int conv(int num,int opc){
  if (opc==1) return dectobin (num,1,0);
  if (opc==2) return bintodec (num,1,0);
}

int dectobin (int n,int base,int num){
  if(n<=1) return num+n*base;
  else{
     num=num+base*(n%2);
     return dectobin(n/2,base*10,num);
  }
}

int bintodec(int n,int base,int num){
  if(n<=1) return num+n*base;
  else{
     num=num+base*(n%10);
     return bintodec(n/10,base*2,num);
  }
}




int main()
{
   int num ,opcao, result;
   scanf("%d %d",&num,&opcao);
   result = conv(num,opcao);
   printf("%d\n",result);
   
}