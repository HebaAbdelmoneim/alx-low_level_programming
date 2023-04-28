#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;
	unsigned long int res;

	res = x / 3;
	res = res / 4019;
	printf("%lu \n", res);
	return (0);
}
