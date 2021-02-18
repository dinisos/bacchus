#include <stdio.h>
#include <math.h>.
#pragma warning (disable:4996)
double fun(double  x)
{
    double s = 1;
    int n = 1;
    double shit = 1;
    double sub = 0;
    if (x < 0.97)
    {
        for (n = 1; ; n++)
        {
            shit *= (((0.5 - (n - 1))) * x)/n;
            s += shit;
            if (fabs(shit - sub) < 0.000001)
            {
                break;
            }
        }
    }
    return s;
}
main()
{  double  x,s;
   void NONO( );
   printf("Input x:  ");  scanf("%lf",&x);
   s=fun(x);
   printf("s=%f\n",s);
   NONO();
}
void NONO()
  FILE *rf, *wf ; int i ; double s, x ;
  rf = fopen("..\\..\\in.dat","r") ;
  wf = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%lf", &x) ;
    s = fun(x) ;
    fprintf(wf, "%lf\n", s) ;
  }
  fclose(rf) ; fclose(wf) ;
}
