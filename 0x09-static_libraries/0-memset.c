#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *@s: pointer to char array
 *@b: constant byte b
 *@n: bytes of the memory area
 *
 * Return: pointer to array of char
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
