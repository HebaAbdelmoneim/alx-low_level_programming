#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 *@size: input parameter
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = j; i < size - 1; i++)
			{
				_putchar(' ');
			}
			for (x = 0; x < j + 1; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
