#include "main.h"
#include <stdio.h>


char *leet(char *s)
{
	int c = 0, i = 0;

	int u[] = {65, 69, 79, 84, 76};
	int l[] = {97, 101, 111, 116, 108};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == u[i] || s[c] == l[i])
			{
				s[c] = n[i];
				break;
			}

		}
		c++;
	}
	return (s);
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
