#include "variadic_functions.h"

/**
 * print_all - print any type
 * @format: pointer to string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, n;

	n = strlen(format);
	va_start(pa, format);

	while (i < n)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(pa, int));
		else if (format[i] == 'i')
			printf("%i", va_arg(pa, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(pa, double));
		else if (format[i] == 's')
			printf("%s", va_arg(pa, char *));
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", ", ");
		i++;
	}
	va_end(pa);
	printf("\n");
}
