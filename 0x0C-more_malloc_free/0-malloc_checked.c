#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: memory size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == 0)
		exit(98);
	return (ar);
}
