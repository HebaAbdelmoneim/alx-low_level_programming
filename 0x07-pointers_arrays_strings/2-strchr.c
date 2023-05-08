#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *@s: pointer to char array
 *@c: char input
 *
 * Return: pointer to array of char
 *
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		if (*(s + j) == c)
			return (s + j);
		j++;
	}
	return (s + j);
}
