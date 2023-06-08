#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number as string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, n, r, i, num = 0, base = 1;

	if (!b)
		return (0);

	len = strlen(b);
	n = atoi(b);
	if (n == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		r = n % 10;
		n = n / 10;
		num += r * base;
		base = base * 2;
	}
	return (num);
}
