#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0;
	int count = 0;
	for (a = 2; a <= 10000; a++)
	{
		int b = 0;
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > sqrt(a))
		{
			count++;
			printf("%d ", a);
		}
	}
	printf("有%d个", count);
	return 0;
}
