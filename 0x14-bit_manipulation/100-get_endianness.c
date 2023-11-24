#include "main.h"
/**
 * get_endianness - function that checks the endiannes
 *
 * Return: 1 0r 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
