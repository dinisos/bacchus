#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char*str1, const char*str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* s1 = str1;
	char* s2 = str2;
	char* cur = (char*)str1;
	if (str2 == '\n')
		return (char*)str1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
		{
			return cur;
		}
		if (!*s1)
			return NULL;
		cur++;
	}
	return NULL;

}

int main()
{
	const char* p1 = "asdfdfgghjkl";
	const char* p2 = "dfg";//0x00777C14
	char* ret = my_strstr(p1, p2);//0x00777B50
	printf("%s\n", ret);
	return 0;
}

/* strstr example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[] = "This is a simple string";//0x00AFF760
//    char* pch;//0x00AFF76A
//    pch = strstr(str, "simple");
//    if (pch != NULL)
//        strncpy(pch, "sample", 6);
//    puts(str);
//    return 0;
//}
