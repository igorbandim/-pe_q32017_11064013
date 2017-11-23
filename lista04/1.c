#include <stdio.h>
#include <math.h>

typedef struct coor{
  float x;
  float y;
  float z;
} coor;

float dist (coor n1, coor n2){
  float d1,d2,d3,d;
  d1 = n1.x-n2.x;
  d2 = n1.y-n2.y;
  d3 = n1.z-n2.z;
  d=sqrt(d1*d1+d2*d2+d3*d3);
  return d;
}

int main()
{
  coor n1,n2;
  scanf("%f, %f,%f",& (n1.x),&(n1.y),&(n1.z)) ;
  float d;
  scanf("%f,%f,%f",& (n2.x),&(n2.y),&(n2.z)) ;
  d= dist(n1,n2);
  d=floorf(d * 100) / 100;
  printf("%.2f\b",d) ;
}