#include <stdio.h>

/**
 * main - prints the sum of the odd values that do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	long int feb[60];
	long int sum = 0;

	feb[0] = 1;
	feb[1] = 2;
	for (i = 2; i < 60; i++)
	{
		feb[i] = feb[i - 1] + feb[i - 2];
	}
	for (j = 0; j < 60; j++)
	{
		if (feb[j] < 4000000)
		{
			if ((feb[j] % 2) == 0)
				sum += feb[j];
		}
	}

	printf("%ld\n", sum);

	return (0);
}
