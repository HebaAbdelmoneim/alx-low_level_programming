#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

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
	int i, n = 0, mul1, mul2;

	mul1 = atoi(av[1]);
	mul2 = atoi(av[2]);
	for (i = mul2; i > 0; i--)
	{
		n += mul1;
	}
	return (n);
}

/**
 * main - check the code for ALX School students.
 *@ac: arg numbers
 *@av: arg array
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int res;

	if (ac != 3)
	{
		_print("Error\n");
		exit(98);
	}
	res = num(av);
	printf("%i\n", res);
	return (0);
}

