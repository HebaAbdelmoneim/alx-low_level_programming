#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * set_mem - intialize the array
 * @ar: array
 * @c: the itialization value
 * @size: array size
 *
 * Return: pointer to the array
 */
char *set_mem(void *ar, char c, unsigned int size)
{
	char *ind = ar;
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ind[i] = c;
	}
	return (ind);
}

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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	set_mem(ar, 0, nmemb * size);
	return (ar);
}
