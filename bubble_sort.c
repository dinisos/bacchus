#include <stdio.h>

void swap(char* a, char* b, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tem = *a;
		*a = *b;
		*b = tem;
		a++;
		b++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base +j*width,(char*)base + (j+1)*width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
	return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}

int main()
{
	float arr[] = { 19.0,28.45,31.45,23.23,12.24, 34.12,42.56,1.5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	bubble_sort(arr,sz,width,cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	return 0;
}
