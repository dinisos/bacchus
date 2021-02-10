#include <stdio.h>
#include <assert.h>

char* my_memmove(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			(*(char*)dest) = (*(char*)src);
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr + 2, arr + 4, 20);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
