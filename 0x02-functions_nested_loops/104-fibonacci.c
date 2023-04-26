#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int num1 = 1, num2 = 2;

	printf("%lu, %lu, ", num1, num2);
	for (i = 2; i < 49; i++)
	{
		num1 += num2;
		printf("%lu, ", num1);
		num2 += num1;
		printf("%lu", num2);
		if (i == 48)
			break;
		printf(", ");
	}
	printf("\n");

	return (0);
}
