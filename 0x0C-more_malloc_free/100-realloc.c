#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to array
 * @old_size: array size
 * @new_size: new array size
 *
 * Return: pointer to the newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ar;
	char *old_ar = ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ar = malloc(new_size);
	if (new_ar == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ar[i] = old_ar[i];
	}
	else if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			new_ar[i] = old_ar[i];
	}
	else 
		return (ptr);
	free(ptr);
	return (new_ar);
}
