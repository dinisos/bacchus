#include    <stdio.h>
int fun(int  a, int  b, int  c)
{
   int  t;
   t = (a>b) ? (b>c? b :(a>c?c:a)) : ((a>c)?a : ((b>c)?c:b));
   return  t;
}
main()
{  int  a1=3, a2=5, a3=4, r;
   r = fun(a1, a2, a3);
   printf("\nThe middle number is  :  %d\n", r);
}
