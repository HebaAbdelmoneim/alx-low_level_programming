#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: pointer to char array
 *@accept: pointer to another char array
 *
 * Return: pointer to char array
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j, k;

	j = k = 0;
	while (s[j] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*(s + j) == *(accept + k))
				return (s + j);
			k++;
		}
		j++;
	}
	return ('\0');
}
