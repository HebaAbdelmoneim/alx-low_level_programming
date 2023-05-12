#include <string.h>
#include "main.h"

/**
 * _strncpy - copy string to the other, n char from string to the other
 *@dest: pointer to the first string array
 *@src: pointer to the second string
 *@n: number of char in the src array that will be copied
 *
 * Return: pointer of type char to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_max, i;

	src_max = strlen(src);
	for (i = 0; i < n; i++)
	{
		if (i > src_max)
			*(dest + i) = 0;
		else
			*(dest + i) = *src;
		src++;
	}
	return (dest);
}
