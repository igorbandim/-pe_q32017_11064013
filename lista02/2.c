#include<stdio.h>
float volume (float a , float b, float c){
    return a*b*c;
}

int main() {
   float base,altura,profund,vol;
   scanf("%f %f %f",&base,&altura,&profund);
   vol=volume(base,altura,profund);
   printf("%.2f\n",vol);
   
}
