#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 *@s: pointer to the char value of s
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length, i = 0;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
