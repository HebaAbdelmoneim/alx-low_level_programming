#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array members
 * @size: size of each member
 *
 * Return: pointer to the new allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	char *ind;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	ind = ar;
	for (i = 0; i < nmemb; i++)
	{
		ind[i] = 0;
	}
	return (ar);
}
