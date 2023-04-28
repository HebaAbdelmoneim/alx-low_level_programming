#include "main.h"

/**
 * print_number - Prints integer numbers
 *
 *@n: input integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n >= 0)
	{
		i = n;
	}
	else
	{
		i = -1 * n;
		_putchar('-');
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + 48);
}
