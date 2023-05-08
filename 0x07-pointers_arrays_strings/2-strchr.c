#include "main.h"
#include <string.h>

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
	int j, len;

	j = 0;
	len = strlen(s);

	while (j <= len)
	{
		if (*(s + j) == c)
			return (s + j);
		j++;
	}
	return ('\0');
}
