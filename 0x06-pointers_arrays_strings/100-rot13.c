#include <string.h>
#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *@str: pointer to char array
 *
 * Return: pointer to array of char
 *
 */

char *rot13(char *str)
{
	char *dest;
	int i;

	dest = str;
	while (*str != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*str == (65 + i))
				*str = 65 + 13 + i;
			else if (*str == (65 + 13 + i))
				*str = 65 + i;
			else if (*str == (97 + i))
				*str = 97 + 13 + i;
			else if (*str == (97 + 13 + i))
				*str = 97 + i;
		}
		str++;
	}
	return (dest);
}
