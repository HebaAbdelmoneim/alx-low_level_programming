#include "main.h"
#include <stdio.h>
/**
 * print_to_98- prints all natural numbers from n to 98
 *
 *@n: the input pram
 *
 * Return: all natural numbers till 98
 *
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%i", j);
			if (j == 98)
				break;
			printf(", ");
		}
	}
		printf("\n");
}

