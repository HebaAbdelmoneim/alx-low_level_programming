#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
int _atoi(char *s)
{
        int length, i, digit, sign = 0, no;
        unsigned int oint = 0;
        char prev;

        length = strlen(s);
        for (i = 0; i <= length; i++)
        {
                if (*s == 45)
                        sign++;
                if (*s >= 48 && *s <= 57)
                {
                        digit = *s - 48;
                        oint = (oint * 10) + digit;
                }
                prev = *s;
                s++;
                if (!(*s >= 48 && *s <= 57) && (prev >= 48 && prev <= 57))
                        break;
        }
        if (sign % 2 != 0)
                no = -1 * oint;
        else
                no = oint;
        return (no);
}
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

unsigned long int num(char **av)
{
	unsigned long int mul1, mul2;

	mul1 = _atoi(av[1]);
	mul2 = _atoi(av[2]);

	return (mul1 * mul2);
}

/**
 * main - check the code for ALX School students.
 *@argc: arg numbers
 *@argv: arg array
 * Return: Always 0.
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	unsigned long int res;

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}
	res = num(argv);
	printf("%lu\n", res);
	return (0);
}

