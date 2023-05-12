#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *@s: pointer to char array
 *@accept: pointer to another char array
 *
 * Return: number of matched char
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, len_a, check;

	j = k = 0;
	check = 0;
	len_a = strlen(accept);

	while (s[j] != '\0')
	{
		check = 0;
		k = 0;
		while (k <= len_a)
		{
			if (*(s + j) == *(accept + k))
				check = 1;
			if (*(accept + k) == '\0' && check == 0)
				return (j);
			k++;
		}
		j++;
	}
	return (j);
}
