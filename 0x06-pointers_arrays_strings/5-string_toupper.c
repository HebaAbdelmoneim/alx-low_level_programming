#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@a: pointer to char array
 *
 * Return: pointer to array of char
 *
 */

char *string_toupper(char *a)
{
	char *dest;

	dest = a;

	while (*a != '\0')
	{
		if (*a >= 97 && *a <= 122)
		{
			*a = *a - 32;
		}
		a++;
	}
	return (dest);
}
