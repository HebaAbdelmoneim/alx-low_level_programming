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
	int check = 0;

	while (n > 0)
	{ 
		if (n & 1)
		{
			_putchar('1');
			check++;
		}
		else
			_putchar('0');
		n >>= 1;
	}
	if (!check)
		_putchar('0');
}
