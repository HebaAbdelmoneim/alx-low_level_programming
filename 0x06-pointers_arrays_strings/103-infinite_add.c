#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 *@n1: pointer to the first number array
 *@n2: pointer to the second number array
 *@r: pointer to the addition result array
 *@size_r: result array size
 *
 * Return: pointer to char array
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int max, i, sum, j, k, d1, d2, rem = 0;

	j = strlen(n1);
	k = strlen(n2);
	if (j >= k)
		max = j;
	else
		max = k;

	if (size_r < max + 1)
		return (0);
	r[max] = '\0';
	for (i = max - 1; i >= 0; i--)
	{
		j--;
		k--;
		if (j >= 0)
			d1 = n1[j] - 48;
		else
			d1 = 0;
		if (k >= 0)
			d2 = n2[k] - 48;
		else
			d2 = 0;
		sum = d1 + d2 + rem;
		r[i] = ((sum % 10) + 48);
			rem = sum / 10;
	}
	if (rem == 1)
	{
		r[max + 1] = '\0';
		if ((max + 2) > size_r)
			return (0);
		while (max-- >= 0)
			r[max + 1] = r[max];
		r[0] = rem + 48;
	}
	return (r); }
