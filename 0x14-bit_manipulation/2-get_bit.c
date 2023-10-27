#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer number
 * @index: bit index
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1 ? 1 : 0);
}

