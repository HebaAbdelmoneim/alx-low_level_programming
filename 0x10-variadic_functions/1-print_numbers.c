#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: parameters numbers
 * @separator: pointer to string
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(pa, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
