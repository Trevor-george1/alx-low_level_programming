#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: Var to be checked
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
