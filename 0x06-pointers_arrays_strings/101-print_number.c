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
	int sw, n2 = 0;

	if (n == 0)
                _putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n % 10 != 0 || n / 10 != 0)
	{
		sw = n % 10;
		n /= 10;
		n2 = (n2 * 10) + sw;
	}
	while (n2 % 10 != 0 || n2 / 10 != 0)
	{
		sw = n2 % 10;
		n2 /= 10;
		_putchar(sw + 48);
	}
}
