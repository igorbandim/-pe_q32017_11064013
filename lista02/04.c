#include<stdio.h>
#include<math.h>

float soma(float a, float b){
    return a+b;
}

float divisao(float a, float b){
    return a/b;
}

float sub(float a, float b){
    return a-b;
}

float mul(float a, float b){
    return a*b;
}
float expon(float a, float b){
    return pow(a,b);
}

float calculadora(float a,float b,int opt){
    if(opt==1) return soma(a,b);
    if(opt==2) return sub(a,b);
    if(opt==3) return mul(a,b);
    if(opt==4) return divisao(a,b);
    if(opt=5) return expon(a,b);
    else return 0;
}


int main() {
    float a,b,result;
    int opcao;
    scanf("%d %f %f",&opcao,&a,&b);
    result=calculadora(a,b,opcao);
    printf("%0.f\n",result);
}
