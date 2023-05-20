#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


/**
 * _atoi - convert the numbers in string to integer
 *@s: pointer to string
 *
 * Return: integer of the input char
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned long int oint = 0, i, length;

	for (length = 0; !(s[length] >= 48 && s[length] <= 57); length++)
	{
		if (*s == 45)
			sign *= -1;
	}

	for (i = length; (s[i] >= 48 && s[i] <= 57); i++)
	{
			oint *= 10;
			oint += (s[i] - 48);
	}

	return (oint * sign);
}

/**
 * _print_int - writes integers
 * @i: The integers to print
 *
 * Return: void
 */
void _print_int(unsigned long int i)
{
	int d = 1, j, digit;

	for (j = 0; i / d > 9; j++, d *= 10)
		;
	while (d >= 1)
	{
		digit = i / d;
		_putchar(digit + 48);
		i %= d;
		d /= 10;
	}
}

/**
 * _print - writes string
 * @c: The string to print
 *
 * Return: void
 */
void _print(char *c)
{
	int s, i;

	s = strlen(c);
	for (i = 0; i < s; i++)
	{
		_putchar(c[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *@argc: arg numbers
 *@argv: arg array
 * Return: Always 0.
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}
	_print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}

