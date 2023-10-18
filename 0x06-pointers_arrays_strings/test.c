
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] < n; j++)
	{
		dest[i] = src[j];
		i++;

	}
	
	dest = '\0';
	return (dest);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s", ptr);
	return (0);
}
