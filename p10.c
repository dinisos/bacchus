#include <stdio.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}

int main()
{
	char dudu[20] = "###############";
	char jo[10] = "abc";
	my_strcpy(dudu, jo);
	printf("%s\n", dudu);
	return 0;
}
