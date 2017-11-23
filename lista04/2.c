#include <stdio.h>
#include <math.h>

typedef struct cron{
  int min;
  int sec;
  int dec;
} cron;

cron subhora (cron t1, cron t2){
  cron result;
  if (t2.dec<t1.dec) {
    t2.sec=t2.sec-1;
    t2.dec=t2.dec+100;
  }
  result.dec=t2.dec-t1.dec;
  if (t2.sec<t1.sec) {
    t2.min=t2.min-1;
    t2.sec=t2.sec+60;
  }
  result.sec=t2.sec-t1.sec;
  result.min=t2.min-t1.min;
  return result;
}

int main()
{
  cron n1,n2,result;
  scanf("%dm %ds %d",&(n2.min),&(n2.sec),&(n2.dec)) ;
  scanf("%dm %ds %d",&(n1.min),&(n1.sec),&(n1.dec)) ;
  result=subhora(n1,n2);
  printf("%dm %ds %d\n",(result.min),(result.sec),(result.dec)) ;
}