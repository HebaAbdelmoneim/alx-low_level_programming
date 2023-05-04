#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *@str: pointer to char array
 *
 * Return: pointer to array of char
 *
 */

char *cap_string(char *str)
{
	char *dest, prev;
	char ss[] = {',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};
	int i;

	dest = str;
	if (*str >= 97 && *str <= 122)
		*str = *str - 32;
	while (*str != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (prev == ss[i])
			{
				if (*str >= 97 && *str <= 122)
				*str = *str - 32;
			}
		}
		prev = *str;
		str++;
	}
	return (dest);
}
