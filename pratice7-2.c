#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("您的电脑将在一分钟内关机，如果输入你是帅哥，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "你是帅哥") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
