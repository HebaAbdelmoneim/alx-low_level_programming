#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *@s: pointer to char array
 *
 * Return: integer string length
 *
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
