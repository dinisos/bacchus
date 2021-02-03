#include <stdio.h>
void fun(int array[3][3])
{
    int a = 0;
    int b = 0;
    int fuck[3][3] = { 0 };
    for (a = 0; a < 3; a++)
    {
        for (b = 0+a; b < 3; b++)
        {
            fuck[a][b] = array[a][b];
            array[a][b] = array[b][a];
            array[b][a] = fuck [a][b];
        }
    }

}

main()
{
   int i,j;void NONO ();
   int array[3][3]={{100,200,300},
                   {400,500,600},
                   {700,800,900}};

   for (i=0;i<3;i++)
   {   for (j=0;j<3;j++)
       printf("%7d",array[i][j]);
       printf("\n");
   }
   fun(array);
   printf("Converted array:\n");
   for (i=0;i<3;i++)
   {   for (j=0;j<3;j++)
       printf("%7d",array[i][j]);
       printf("\n");
   }
   NONO();
  getchar();
}

void NONO ()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
   int i,j, array[3][3];
   FILE *rf, *wf ;

   rf = fopen("..\\..\\in.dat","r") ;
   wf = fopen("..\\..\\out.dat","w") ;
   for (i=0;i<3;i++)
   for (j=0;j<3;j++)
     fscanf(rf, "%d", &array[i][j]);
   fun(array);
   for (i=0;i<3;i++)
   {   for (j=0;j<3;j++)
       fprintf(wf, "%7d", array[i][j]);
       fprintf(wf, "\n");
   }
   fclose(rf) ;
   fclose(wf) ;
}
