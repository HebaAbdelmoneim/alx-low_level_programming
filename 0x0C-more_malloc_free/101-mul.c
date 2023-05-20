#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * _print_int - writes integers
 * @i: The integers to print
 *
 * Return: void
 */
void _print_int(int i)
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
 * num - multiple two numbers
 * @av: arg array
 *
 * Return: multipled result
 */

int num(char **av)
{
	unsigned long int mul1, mul2;

	mul1 = atoi(av[1]);
	mul2 = atoi(av[2]);
	if (mul1 == 0 || mul2 == 0)
	{
		_print("Error \n");
		exit(98);
	}
	return (mul1 * mul2);
}

/**
 * main - check the code for ALX School students.
 *@ac: arg numbers
 *@av: arg array
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	unsigned long int res;

	if (ac != 3)
	{
		_print("Error\n");
		exit(98);
	}
	res = num(av);
	printf("%lu\n", res);
	return (0);
}

