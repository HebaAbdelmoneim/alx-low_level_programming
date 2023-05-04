#include <string.h>
#include "main.h"

/**
 * leet - Encodes a string
 *@str: pointer to char array
 *
 * Return: pointer to array of char
 *
 */

char *leet(char *str)
{
	char *dest;
	char letters[] = {'O', 'L', 'E', 'A', 'T'};
	char digits[] = {'0', '1', '3', '4', '7'};
	int i;

	dest = str;
	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == letters[i] || *str == letters[i] + 32)
			{
				*str = digits[i];
			}
		}
		str++;
	}
	return (dest);
}
