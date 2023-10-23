#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			if (j == 7)
			{
				printf("\n");
			}
		}
	}
}
