#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	int mid = 0;
	int min = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a < b)
	{
		min = a;
		max = b;
		if (b < c)
		{
			max = c;
			mid = b;
		}
		else
		{
			mid = c;
			if (a < c)
			{
				;
			}
			else
			{
				min = c;
				mid = a;
			}
		}
	}
		else
		{
			max = a;
			min = b;
			if (a < c)
			{
				max = c;
				mid = a;
			}
			else
			{
				mid = c;
				if (b < c)
				{
					;
				}
				else
				{
					min = c;
					mid = b;
				}
			}
		}
	printf("%d < %d < %d ", min, mid, max);
	return 0;
}

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b < a)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (c < b)
//	{
//		int tem = c;
//		c = b;
//		b = tem;
//	}
//	if (b < a)
//	{
//		int tem = c;
//		c = a;
//		a = tem;
//	}
//	printf("%d < %d < %d", a, b, c);
//	return 0;
//}
