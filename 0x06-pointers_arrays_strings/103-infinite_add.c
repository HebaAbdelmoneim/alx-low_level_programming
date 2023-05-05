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
	int max, min, n1_len, n2_len, i, dif, sum, j = 0, check = 0, rem = 0;
	char res;

	n1_len = strlen(n1);
	n2_len = strlen(n2);

	if (n1_len >= n2_len)
	{
		max = n1_len + 1;
		min = n2_len + 1;
		check = 1;
	}
	else
	{
		max = n2_len + 1;
		min = n1_len + 1;
		check = -1;
	}

	if (size_r <= max)
		return (0);
	for (i = size_r - 2; i >= 0; i--)
	{
		if (max - j - 2 >= 0)
		{
			if (max == min)
				sum = (*(n1 + max - j - 2) - 48) + (*(n2 + max - j - 2) - 48) + rem;
			else if (check == 1)
			{
				if ((n2_len - j - 1) >= 0)
					sum = (*(n1 + max - j - 2) - 48) + (*(n2 + n2_len - j - 1) - 48) + rem;
				else
					sum = (*(n1 + max - j - 2) - 48) + rem;
			}
			else if (check == -1)
			{
				if ((n1_len - j - 1) >= 0)
					sum = (*(n1 + n1_len - j - 1) - 48) + (*(n2 + max - j - 2) - 48) + rem;
				else
					sum = (*(n2 + max - j - 2) - 48) + rem;
			}
			if ((sum / 10) == 0)
			{
				res = (sum + 48);
				rem = 0;
			}
			else
			{
				rem = sum / 10;
				res  = ((sum % 10) + 48);
			}
			*(r + i) = res;
		}
		else
		{
			*(r + i) = rem + 48;
		}
		j++;
	}
/*	s = strlen(r);
*	if (s > size_r)
*		return (0);
*		*/
	dif = size_r - max;
	return (r + dif - 1);
}
