#include   <stdio.h>
#pragma warning (disable:4996)
int fun(int  n)
{  int  a[10000], i,j, count=0;
   for (i=2; i<=n; i++)  a[i] = i;
   i = 2;
   while (i<n) {
      for (j=a[i]*2; j<=n; j+=a[i])
         a[j] = 0;
      i++;
      while (a[i]==0)
         i++;
   }
   printf("\nThe prime number between 2 to %d\n", n);
   for (i=2; i<=n; i++)
     if (a[i]!=0)
      {  count++;    printf( count%15?"%5d":"\n%5d",a[i]);  }
   return  count;
}
main()
{  int  n=20, r;
   r = fun(n);
   printf("\nThe number of prime is  :  %d\n", r);
}
