#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
		return n*fac(n - 1);
}

int main()
{
	int i = 0;
	int o = 0;
	scanf("%d", &i);
	o = fac(i);
	printf("%d\n", o);
	return 0;
}
