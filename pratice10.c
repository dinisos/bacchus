#include    <stdio.h>
#include    <math.h>
double fun(double  x, int  n)
{  double  f, t;      int  i;
   f = 1;
   t = -1;
   for (i=1; i<n; i++)
   {
       t *= (-1)*x/i;
      f += t;
   }
   return  f;
}
main()
{  double  x, y;
   x=2.5;
   y = fun(x, 15);
   printf("\nThe result is :\n");
   printf("x=%-12.6f    y=%-12.6f\n", x, y);
   getchar();
}
