#include "main.h"

/**
 * puts2 - print even or odd depending on the first number in the string
 *
 *@str: pointer to the char value of s
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
