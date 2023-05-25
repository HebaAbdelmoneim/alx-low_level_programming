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
	char ch;

	n = strlen(format);
	va_start(pa, format);

	while (i < n)
	{
		ch  = format[i];
		if (ch == 'c' || ch == 'i')
			printf(ch == 'c' ? "%c" : "%i", va_arg(pa, int));
		if (ch == 'f')
			printf("%f", va_arg(pa, double));
		else if (ch == 's')
			printf("%s", va_arg(pa, char *));
	/*	else
	*		printf("(nil)");
	*		*/
		printf("%s", i < (n - 1) ? ", " : "\n");
		i++;
	}
	va_end(pa);
	printf("\n");
}
