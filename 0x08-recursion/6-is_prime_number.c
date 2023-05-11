#include "main.h"
#include <stdio.h>

/**
 * is_prime - check if the number is prime
 *@n: first input number
 *@i: input number for checking
 *
 * Return: 1 on sccusse
 *0 on fail
 *
 */

int is_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 2)
		return (0);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number - check if the number is prime
 *@n: first input number
 *
 * Return: 1 on sccusse
 *0 on fail
 *
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
