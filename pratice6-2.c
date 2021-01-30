#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int num = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a < b)
	{
		int tem = a;
		a = b;
		b = tem;
	}
	while(num = a%b)
	{
		a = b;
		b = num;
	}
	printf("%d\n", b);
	return 0;
}
