#include <stdio.h>
#include <string.h>
void main(void)
{
	char *c = "0123456789";
	int i;
	for (i = 0; c[i] != '\0'; i += 2)
		printf("%c", c[i]);
	printf("\n");

	
}
