#include "main.h"

/**
 * print_line - Print the _ n of times
 *
 *@n: input parameter
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
