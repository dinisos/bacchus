#include <stdio.h>
#include <string.h>
long  fun ( char *p)
{
  int i,len;
  long x=0;
  len=strlen(p);
  for(i=0;i<len;i++)
	  x=x*10+p[i]-'0';
  return x;
}

main()
{ char s[6];void NONO ();
  long    n;
  printf("Enter a string:\n") ;
  gets(s);
  n = fun(s);
  printf("%ld\n",n);
  NONO (  );
  getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i ;
  char s[20] ;
  long n ;

  fp = fopen("..\\..\\in.dat","r") ;
  wf = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%s", s) ;
    n = fun(s);
    fprintf(wf, "%ld\n", n) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}
