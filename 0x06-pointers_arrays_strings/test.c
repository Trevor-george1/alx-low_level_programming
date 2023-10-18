
#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
    ptr = _strncpy(s1, s2, 3);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s", ptr);
	return (0);
}
