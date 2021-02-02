#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void popo_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flog = 1;
		int j = 0;
		for (j = 0; j < sz -1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = 0;
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tem;
				flog = 0;
			}
			if (flog == 1)
			{
				break;
			}
		}
	}
}

int main()
{
	int arr[] = { 10,8,7,6,5,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	popo_sort(arr, sz);
	for (a = 0; a < sz; a++)
		printf("%d ", arr[a]);
	return 0;
}
