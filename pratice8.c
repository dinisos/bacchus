#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int i = 0;
	int ret = 0;
	scanf("%d", &i);
	ret = fib(i);
	printf("%d\n", ret);
	return 0;
}
