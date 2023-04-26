#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
   	int feb[50];

	feb[0] = 1;
	feb[1] = 2;
	printf("%d, %d, ", feb[0], feb[1]);
	for (i = 2; i <= 50; i++)
	{
		feb[i] = feb[i - 1] + feb[i - 2];
		printf("%d, ", feb[i]);
	}
	printf("\n");

	return (0);
}
