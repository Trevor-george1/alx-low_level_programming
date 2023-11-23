#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int c = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[c] != '\0')
	{
		if (b[c] == '0' || b[c] == '1')
		{
			result = (result << 1) | (b[c] - '0');
			c++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
