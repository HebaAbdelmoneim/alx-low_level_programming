#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings, including the terminating null byte (\0)
 *@dest: pointer to the first string array
 *@src: pointer to the second string array
 *
 * Return: pointer of type char to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dest_max, src_max, i;

	dest_max = strlen(dest);
	src_max = strlen(src);
	for (i = 0; i <= src_max; i++)
	{
		*(dest + dest_max + i) = *(src + i);
	}
	return (dest);
}
