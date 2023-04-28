#include <stdio.h>

/**
 * _sqr - calculate the square mean root of the input
 *
 *@a: input parameter
 *
 * Return: the sqr value
 */

double _sqr(double a)
{
    
	double i = 0;
	double j = a / 2;

	while (j != i) 
	{
		i = j;
		j = (a / i + i) / 2;
	}
  
	return j;
}

/**
 * largest_prime - print the largest prime factor
 *
 *@num: input parameter
 *
 * Return: void
 */

void largest_prime(long int num)
{
	int l_p, p_n;
	long int n = num;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (p_n = 3; p_n <= _sqr(n); p_n += 2)
	{
		while (n % p_n == 0)
		{
			n = n / p_n;
			l_p = p_n;
		}
	}

	if (n > 2)
		l_p = n;

	printf("%d \n", l_p);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	largest_prime(612852475143);
	return (0);
}
