#include <stdio.h>
void main(void)
{
	char *c = "Hello";
	int i = 0, count = 0;
	
	while (c[i] != '\0')
	{
		count++;
		i++;
	}
	printf("%d\n", count);
}
