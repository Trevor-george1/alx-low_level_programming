#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: Var to be checked
 */

void rev_string(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = strlen(s);
	begin_ptr = s;
	end_ptr = s + l - 1;
	for (i = 0; i < (l - 1) / 2; i++)
	{
	ch = *end_ptr;
	*end_ptr = *begin_ptr;
	*begin_ptr = ch;
	begin_ptr++;
	end_ptr--;
	}
}
