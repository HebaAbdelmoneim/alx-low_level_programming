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
	int i;

	if (n >= 0)
	{
		i = n;
	}
	else /*if (n < 0)*/
	{
		i = -1 * n;
		_putchar('-');
	}

	if (i / 1000)
	{
		_putchar((i / 1000) + 48);
		_putchar(((i / 100) % 10) + 48);
		_putchar(((i % 100) / 10) + 48);
		_putchar((i % 10) + 48);
	}
	else if (i / 100)
	{
		_putchar((i / 100) + 48);
		_putchar(((i % 100) / 10) + 48);
		_putchar((i % 10) + 48);
	}
	else if (i / 10)
	{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
	}
	else
	{
		_putchar(i + 48);
	}
}
