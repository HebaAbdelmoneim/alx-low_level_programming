#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: pointer to the integer array
 *@n: array length
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int i, rev, len;

	len = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		rev = *(a + len);
		*(a + len) = *(a + i);
		*(a + i) = rev;
		len--;
	}
}
