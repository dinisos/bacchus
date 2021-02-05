#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
char *fun(char  *s)
{ int  i, j, k, n;    char  *p, *t;
  n=strlen(s)+1;
  t=(char*)malloc(n*sizeof(char));
  p=(char*)malloc(n*sizeof(char));
  j=0; k=0;
  for(i=0; i<n; i++)
  {  if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))) {
/**********found**********/
       t[j]=s[i]; j++;}
     else
     {  p[k]=s[i]; k++; }
  }
/**********found**********/
  for(i=0; i<k; i++)  t[j+i]=p[i];
/**********found**********/
  t[j+k]= p[k];
  return  t;
}
main()
{ char  s[80];
  printf("Please input: ");  scanf("%s",s);
  printf("\nThe result is: %s\n",fun(s));
  getchar();
}
