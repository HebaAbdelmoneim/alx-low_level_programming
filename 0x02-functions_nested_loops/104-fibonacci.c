#include <stdio.h>

/**
 * num_length - return number length
 * @n: input parm
 *
 * Return: number length
 */

int num_length(int n)
{
	int count = 0;

	while (n != 0)
	{
		n = n / 10;
		count += 1;
	}
	return (count);
}

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, length;
	unsigned long int n1p1 = 1, n2p1 = 2, n1p2 = 0, n2p2 = 0;
	unsigned long int scale = 100000000, num1 = 0, num2 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (n1p2 > 0)
			printf("%lu", n1p2);
		length = num_length(scale) - 1 - num_length(n1p1);

		while ((n1p2 > 0) && (length > 0))
		{
			printf("%d", 0);
			length--;
		}

		printf("%lu", n1p1);

		num1 = (n1p1 + n2p1) % scale;
		num2 = n1p2 + n2p2 + ((n1p1 + n2p1) / scale);

		n1p1 = n2p1;
		n1p2 = n2p2;
		n2p1 = num1;
		n2p2 = num2;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
