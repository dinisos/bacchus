#include <stdio.h>
#include <string.h>
void  fun( char *a, int  n )
{
  /* 以下代码仅供参考 */
  int i=0,j,k=0;
  while(a[k]=='*') k++; /* k为统计*字符个数 */
  if(k>n)
  {
    i=n;j=k;
    /* 以下完成将下标为k至串尾的字符前移k-n个位置 */
    strcpy(&a[0], &a[k - n]);
  }
}

main()
{  char  s[81];  int  n;void NONO ();
   printf("Enter a string:\n");gets(s);
   printf("Enter n :  ");scanf("%d",&n);
   fun( s,n );
   printf("The string after deleted:\n");puts(s);
   NONO();
   getchar();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  int i, n ; char s[81] ;
  in = fopen("..\\..\\in.dat","r") ;
  out = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    fscanf(in, "%d", &n) ;
    fun(s,n) ;
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}
