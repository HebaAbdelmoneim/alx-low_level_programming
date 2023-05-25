#include "variadic_functions.h"

/**
 * print_char - print char
 * @arg: the arg to be printed
 * @s: pointer to string
 *
 * Return: void
 */
void print_char(char *s, va_list arg)
{
	char c = va_arg(arg, int);

	printf("%s%c", s, c);
}

/**
 * print_int - print int
 * @arg: the arg to be printed
 * @s: pointer to string
 *
 * Return: void
 */
void print_int(char *s, va_list arg)
{
	int in = va_arg(arg, int);

	printf("%s%i", s, in);
}

/**
 * print_float - print float
 * @arg: the arg to be printed
 * @s: pointer to string
 *
 * Return: void
 */
void print_float(char *s, va_list arg)
{
	float fl = va_arg(arg, double);

	printf("%s%f", s, fl);
}

/**
 * print_str - print string
 * @arg: the arg to be printed
 * @s: pointer to string
 *
 * Return: void
 */
void print_str(char *s, va_list arg)
{
	char *st = va_arg(arg, char *);

	if (st == NULL)
		printf("(nil)");
	printf("%s%s", s, st);
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
	unsigned int i = 0, j = 0;
	char ch;
	char *s = "";
	f_type tys[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_str},
	{NULL, NULL}
	};

	va_start(pa, format);
	while (format != NULL && format[i])
	{
		ch  = format[i];
		j = 0;
		while (tys[j].t)
		{
			if (ch == tys[j].t[0])
			{
				tys[j].f(s, pa);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
