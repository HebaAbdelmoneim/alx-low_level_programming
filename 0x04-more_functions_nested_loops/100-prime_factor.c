#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int largest_prime, p_n;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (p_n = 3; p_n <= sqrt(n); p_n += 2)
	{
		while (n % p_n == 0)
		{
			n = n / p_n;
			largest_prime = p_n;
		}
	}

	if (n > 2)
		largest_prime = n;

	printf("%d \n", largest_prime);

	return (0);
}
