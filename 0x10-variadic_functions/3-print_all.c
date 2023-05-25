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
	char *st;

	n = strlen(format);
	va_start(pa, format);

	while (i < n)
	{
		ch  = format[i];
		switch (ch){
		case 'c':
			printf("%c",  va_arg(pa, int));
			break;
		case 'i':
			printf("%i", va_arg(pa, int));
			break;
		case 'f':
			printf("%f", va_arg(pa, double));
			break;
		}
		if (ch == 's')
		{
			st = va_arg(pa, char *);
			if (st == NULL)
			{
				printf("(nil)");
			}
			printf("%s", st);
		}
		printf("%s", i < (n - 1) ? ", " : "\n");
		i++;
	}
	va_end(pa);
}
