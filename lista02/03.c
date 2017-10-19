#include<stdio.h>
#include<math.h>


int main() {

    double pi,a=1.0,b=1.0/sqrt(2),a1,p=1.0,t=0.25;
    int i=0;
    while(i<=10) {
        a1 = ( a+b )/ 2.0;
        b= sqrt(a*b);
        t= t-p*(a-a1)*(a-a1);
        p=2*p;
        a=a1;
        i=i+1;
    }
   pi=((a+b)*(a+b))/(4.0*t);
   printf("%.20f\n",pi);
   return 0;
}
