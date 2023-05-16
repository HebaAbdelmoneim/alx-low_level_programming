#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - allocat a space in memory for string
 * @str: pointer to string
 *
 * Return: array of char
 */

char *_strdup(char *str)
{
	char *ar;
	int i, len;

	len = strlen(str);
	if (str == NULL)
		return (NULL);
	ar = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		if (ar == NULL)
			return (NULL);
		ar[i] = str[i];
	}
	return (ar);
}
