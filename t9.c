#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
double fun(double  x[9])
{int i ;
double avg=0.0,sum=0.0; 
for (i=0;i<8;i++)
{avg=(x[i]+x[i+1])/2; 
sum+=sqrt(avg);
}
return sum; 
}
main()
{ double  s,a[9]={12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0};
  void NONO( );
  int  i;
  printf("\nThe original data is :\n");
  for(i=0;i<9;i++)printf("%6.1f",a[i]);  printf("\n\n");
  s=fun(a);
  printf("s=%f\n\n",s);
  NONO();
}
void NONO()
  FILE *rf, *wf ; int i, j ; double s, a[9] ;
  rf = fopen("..\\..\\in.dat","r") ;
  wf = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 5 ; i++) {
    for(j = 0 ; j < 9 ; j++) fscanf(rf, "%lf", &a[j]) ;
    s = fun(a) ;
    fprintf(wf, "%lf\n", s) ;
  }
  fclose(rf) ; fclose(wf) ;
}
