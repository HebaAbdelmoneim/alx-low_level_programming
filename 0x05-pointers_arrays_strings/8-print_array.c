#include "main.h"
#include <stdio.h>
/**
 * print_array - print the array n elements
 *@a: pointer to an array
 *@n: elements number
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
