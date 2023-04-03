#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * Return: Nothing
 * @a: variable to be created
 */
void print_chessboard(char (*a)[8])
{
	int r = 8;
	int c = 8;
	int x, b;

	for (x = 0; x < r; x++)
	{
	for (b = 0; b < c; b++)
	{
	_putchar(a[x][b]);
	}
	_putchar('\n');
	}
}
