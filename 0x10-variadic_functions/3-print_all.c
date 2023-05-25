#include "variadic_functions.h"

/**
 * print_char - print char
 * @arg: the arg to be printed
 *
 * Return: void
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - print int
 * @arg: the arg to be printed
 *
 * Return: void
 */
void print_int(va_list arg)
{
        int in = va_arg(arg, int);
        printf("%i", in);
}

/**
 * print_float - print float
 * @arg: the arg to be printed
 *
 * Return: void
 */
void print_float(va_list arg)
{
        float fl = va_arg(arg, double);
        printf("%f", fl);
}

/**
 * print_str - print string
 * @arg: the arg to be printed
 *
 * Return: void
 */
void print_str(va_list arg)
{
        char *st = va_arg(arg, char *);
	if (st == NULL)
		printf("(nil)");
        printf("%s", st);
}

/**
 * print_all - print any type
 * @format: pointer to string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, j = 0, n;
	char ch;
	f_type tys[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_str},
        {NULL, NULL}
        };

	n = strlen(format);
	va_start(pa, format);
	while (i < n)
	{
		ch  = format[i];
		j = 0;
		while (tys[j].t)
		{
			if (ch == tys[j].t[0])
				tys[j].f(pa);
			j++;
		}
		printf("%s", i < (n - 1) ? ", " : "\n");
		i++;
	}
	va_end(pa);
}
