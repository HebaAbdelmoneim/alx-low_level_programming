#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the number that the code get its last digit
 *
 * Return: On success last digit of n.
 *
 */
int print_last_digit(int n)
{
	int abs, r;

	if (n >= 0)
	{
		abs = n;
	}
	else
	{
		abs = n * -1;
	}
	r = abs % 10;
	_putchar('0' + r);
	return (r);
}
