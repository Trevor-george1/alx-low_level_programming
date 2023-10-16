#include <stdio.h>
#include <string.h>
void main(void)
{
	char *c = "Hello";
	char *a;
	int i = 0, len = 0, end, begin;

	while (c[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; --i)
	{
		printf("%c", c[i]);
	}
	printf("\n");


	
}
