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
	int n;

	dest = str;
	while (*str != '\0')
	{
		n = 1;
		while (((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)) && n == 1)
		{
			if ((*str >= 65 && *str <= 77) || (*str >= 97 && *str <= 109))
				*str += 13;
			else
				*str -= 13;
			n = 0;
		}
		str++;
	}
	return (dest);
}
