#include <stdio.h>
#include <string.h>
void main(void)
{
	char *c = "0134";
	int len, n;

	for (len = 0; c[len] != '\0'; len++)
		;
	if (len % 2 == 0)
	{
		for (n = len / 2; c[n] != '\0'; n++)
			putchar(c[n]);
	}
	else
	{
		for (n = ((len - 1 ) / 2) + 1; c[n] != '\0'; n++)
			putchar(c[n]);
	}
	



	
}
