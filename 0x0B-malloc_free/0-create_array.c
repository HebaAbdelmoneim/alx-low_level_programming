#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: the array size
 * @c: the initial value for the array
 *
 * Return: array of char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size);
	for (i = 0; i < size; i++)
	{
		if (ar == NULL)
			return (NULL);
		ar[i] = c;
	}
	return (ar);
}
