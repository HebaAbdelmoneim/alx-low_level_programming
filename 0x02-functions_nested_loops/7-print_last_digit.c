#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the number that the code get its last digit
 *
 * Return: last digit of number
 *
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
	}
	else
	{
		r = -1 * (n % 10);
	}
	_putchar('0' + r);
	return (r);
}
