#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: integer number
 * @m: the other integer number
 *
 * Return: number of the bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cal, ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cal = ex >> i;
		if (cal & 1)
			count++;
	}
	return (count);
}

