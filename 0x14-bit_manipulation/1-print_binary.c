#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: integer number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
       char c;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if ((n & 1) == 0)
		{
			c = '0';
			_putchar(c);
		}
		else
		{
			c = '1';
			_putchar(c);
		}
		n >>= 1;
	}
	_putchar('\n');
}
