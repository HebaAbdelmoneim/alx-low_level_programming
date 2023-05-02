#include <string.h>
#include "main.h"

/**
 *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 *@dest: pointer to an array
 *@src: pointer to address
 *
 * Return: array of type char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	return (dest);
}
