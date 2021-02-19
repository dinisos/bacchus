#include <stdio.h>
#include <stdlib.h>
#define  N  5
double fun ( int w[][N] )
{ int i,j,n=0;double sum=0;
  for(i = 0 ; i < 5 ; i++)
     for(j = 0 ; j < 5 ; j++)
      if(i==0||j==0||i==N-1||j==N-1) {sum+=w[i][j];n++;}
  return  sum/n;
}

main ( )
{  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
   int i, j;void NONO ();
   double s ;
   printf("***** The array *****\n");
   for ( i =0;  i<N; i++ )
   {  for ( j =0; j<N; j++ )
     {  printf( "%4d", a[i][j] ); }
        printf("\n");
   }
   s = fun ( a );
   printf ("***** THE  RESULT *****\n");
   printf( "The sum is :  %lf\n",s );
   NONO( );
   getchar();
}

void NONO ()
  FILE *rf, *wf ;
  int i, j, a[5][5]; double s ;

  rf = fopen("..\\..\\in.dat","r") ;
  wf = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 5 ; i++)
  for(j = 0 ; j < 5 ; j++) fscanf(rf, "%d ", &a[i][j]) ;
  s = fun(a) ;
  fprintf(wf, "%lf\n", s);
  fclose(rf) ;
  fclose(wf) ;
}
