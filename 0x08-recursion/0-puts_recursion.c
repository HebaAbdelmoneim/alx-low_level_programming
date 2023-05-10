#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *@s: pointer to 2d char array
 *
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("\n");
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
