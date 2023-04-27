#include "main.h"

/**
 * print_square - Prints a square
 *
 *@size: input parameter
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
