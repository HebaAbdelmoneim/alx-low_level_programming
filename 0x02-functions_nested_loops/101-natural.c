#include "main.h"
#include <stdio.h>
/**
 * multiples_of_three_or_five- computes
 * and prints the sum of all the multiples of 3 or 5 below 1024
 *
 *
 * Return: multiples
 *
 */
void multiples_of_three_or_five(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d", sum);
	printf("\n");
}
