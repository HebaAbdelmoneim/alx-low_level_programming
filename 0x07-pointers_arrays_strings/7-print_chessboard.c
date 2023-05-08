#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 *@a: pointer to 2d char array
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c", a[j][i]);
		}
		printf("\n");
	}
}
