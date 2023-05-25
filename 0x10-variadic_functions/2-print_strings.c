#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: parameters numbers
 * @separator: pointer to string
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *s;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(pa, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
