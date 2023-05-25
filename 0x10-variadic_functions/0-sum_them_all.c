#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: parameters numbers
 *
 * Return: integer summation
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum = 0;

	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);
	return (sum);
}
