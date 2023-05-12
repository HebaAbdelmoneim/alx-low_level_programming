#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings, n char from string to the other
 *@dest: pointer to the first string array
 *@src: pointer to the second string array
 *@n: number of char in the src array that will be be concatenated
 *
 * Return: pointer of type char to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_max, src_max, i;

	dest_max = strlen(dest);
	src_max = strlen(src);
	if (n >= src_max)
		n = src_max;
	for (i = 0; i < n; i++)
	{
		*(dest + dest_max + i) = *(src + i);
	}
	return (dest);
}
