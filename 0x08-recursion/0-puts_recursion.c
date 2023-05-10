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
	printf("%c", *s);
	if (*s == '\0')
		printf("\n");
	else
		_puts_recursion(s + 1);
}
