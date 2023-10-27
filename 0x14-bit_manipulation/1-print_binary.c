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
	int check = 0, i = 63;
	unsigned long int cal;

	while (i >= 0)
	{
		cal = n >> i;
		if (cal & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
		i--;
	}
	if (!check)
		_putchar('0');
}

