#include "main.h"

/**
 * _strlen - count the length of a string
 *
 *@s: pointer to the char value of s
 *
 * Return: integer, the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
