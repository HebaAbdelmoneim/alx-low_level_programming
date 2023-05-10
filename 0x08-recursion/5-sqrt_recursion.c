#include "main.h"
#include <stdio.h>

/**
 * square - returns the natural square root of a number
 *@n: first input number
 *@i: the start value
 *
 * Return: integer natural square root
 *
 */

int square(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) < n)
		return (square(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: first input number
 *
 * Return: integer natural square root
 *
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}


