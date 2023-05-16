#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocat a space in memory for string
 * @str: pointer to string
 *
 * Return: array of char
 */

char *_strdup(char *str)
{
	char *ar;
	int i;

	if (str == NULL)
		return (NULL);
	ar = malloc(8);
	while (str[i] != '\0')
	{
		if (ar == NULL)
			return (NULL);
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
