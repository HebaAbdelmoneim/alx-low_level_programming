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
	char o[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	dest = str;
	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == o[i])
			{
				*str = c[i];
				break;
			}
		}
		str++;
	}
	return (dest);
}
