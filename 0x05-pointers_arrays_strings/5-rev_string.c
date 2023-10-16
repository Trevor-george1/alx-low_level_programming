#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Retur: Nothing
 */
void rev_string(char *s)
{
	int len = 0, start, end;
	char temp;

	while (s[len] != '\0')
		len++;
	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
