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
	unsigned int j, k, len_s, len_a, count;

	j = k = 0;
	count = 0;
	len_s = strlen(s);
	len_a = strlen(accept);

	while (j <= len_s / 2)
	{
		k = 0;
		while (k <= len_a)
		{
			if (*(s + j) == *(accept + k))
				count++;
			k++;
		}
		j++;
	}
	return (count);
}
