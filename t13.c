#include    <stdio.h>
#pragma warning (disable:4996)
#define    OK(i, t, n)    ((i%t==0) && (i/t<n))
int fun(int  t1, int  t2, int  t3, int  t4, int  n)
{  int  count, t , maxt=t1;
   if (maxt < t2) maxt = t2;
   if (maxt < t3) maxt = t3;
   if (maxt < t4) maxt = t4;
   count=1;
   for(t=1; t< maxt*(n-1); t++)
   {
      if(OK(t, t1, n) || OK(t, t2, n)|| OK(t, t3, n) || OK(t, t4, n) )
         count++;
   }
   return count;
}
main()
{  int  t1=7, t2=5, t3=6, t4=4, n=10, r;
   r = fun(t1, t2, t3, t4, n);
   printf("The sound  :  %d\n", r);
}
