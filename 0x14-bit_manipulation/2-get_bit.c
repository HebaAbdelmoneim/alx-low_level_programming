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
	int check = 0;
	unsigned long int cal;

	if (index > 0)
	{
		cal = n >> index;
		if (cal & 1)
		{
			check++;
			return (1);;
		}
		else if (check)
		{
			return (0);
		}
	}
	return (0);
}

