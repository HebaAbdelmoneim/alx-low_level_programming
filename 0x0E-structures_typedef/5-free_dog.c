#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - creates a new dog
 *
 * @d: pointer to strcut
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
