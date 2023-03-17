#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always
*/
int main(void)
{
	char c;
	char caps;

	for (c = 'a'; c <= 'z'; c++)
	for (caps = 'A'; caps <= 'Z'; caps++)
	putchar(c);
	putchar(toupper(caps));
	putchar('\n');
	return (0);

}
