#include "main.h"

/**
 * _puts - prints a string
 *
 *@str: pointer to the char value of str
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}