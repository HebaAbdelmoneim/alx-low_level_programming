#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest: pointer to the destination char array
 *@src: pointer to the source char array
 *@n: bytes of the memory area
 *
 * Return: pointer to array of char
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

