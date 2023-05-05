#include <string.h>
#include "main.h"

/**
 * print_number - Prints an integer
 *@n: the integer number
 *
 * Return: void
 *
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -1 * n;
	}
	else
		x = n;
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + 48);
}
