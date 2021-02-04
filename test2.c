#include <stdio.h>
#define   N   12
typedef  struct
{  char  num[10];
   double  s;
} STREC;
double  fun( STREC  *a, STREC *b, int *n )
{
    int i = 0;
    double ar = 0;
    int j = 0;
    *n = 0;
    for (a[i]; i < N; i++)
    {
        ar += a[i].s;
    }
    double q = 0;
    q = ar / N;
    for (i =0;i < N;i++)
    {
        if (a[i].s >= q)
        {
            b[*n].s = a[i].s;
            for (j = 0; j < 10; j++)
                b[*n].num[j] = a[i].num[j];
            *n = *n + 1;
        }
    }
        return ar / N;
 /*   int i, j;
    double aver = 0;
    *n = 0;
    for (i = 0; i < N; i++)
        aver = aver + a[i].s;
    aver = aver / N;
    for (i = 0; i < N; i++)
        if (a[i].s >= aver)
        {
            b[*n].s = a[i].s;
            for (j = 0; j < 10; j++)
                b[*n].num[j] = a[i].num[j];
            *n = *n + 1;
        }
    return (aver);*/
}

main()
{  STREC  s[N]={{"GA05",85},{"GA03",76},{"GA02",69},{"GA04",85},
		{"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87},
		{"GA09",60},{"GA11",79},{"GA12",73},{"GA10",90}};
   STREC  h[N], t;FILE *out ;
   int  i,j,n;  double  ave;
   ave=fun( s,h,&n );
   printf("The %d student data which is higher than %7.3f:\n",n,ave);
   for(i=0;i<n; i++)
     printf("%s  %4.1f\n",h[i].num,h[i].s);
   printf("\n");
   out = fopen("..\\..\\out.dat","w") ;
   fprintf(out, "%d\n%7.3f\n", n, ave);
   for(i=0;i<n-1;i++)
     for(j=i+1;j<n;j++)
       if(h[i].s<h[j].s) {t=h[i] ;h[i]=h[j]; h[j]=t;}
   for(i=0;i<n; i++)
     fprintf(out,"%4.1f\n",h[i].s);
   fclose(out);
   getchar();
}
