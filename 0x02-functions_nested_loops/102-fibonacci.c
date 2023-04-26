#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int feb[50];

	feb[0] = 1;
	feb[1] = 2;
	printf("%ld, %ld, ", feb[0], feb[1]);
	for (i = 2; i < 50; i++)
	{
		feb[i] = feb[i - 1] + feb[i - 2];
		printf("%ld", feb[i]);
		if (i == 49)
			break;
		printf(", ");
	}
	printf("\n");

	return (0);
}
