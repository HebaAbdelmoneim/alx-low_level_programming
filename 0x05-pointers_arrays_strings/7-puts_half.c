#include <string.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 *@str: pointer to the char value of s
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length, i = 0;

	length = strlen(str);
	while (*str != '\0')
	{
		if (i > (length - 1) / 2)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
