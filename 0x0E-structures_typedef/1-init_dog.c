#include "dog.h"

/**
 * init_dog - intialize the structure
 *
 * @d: pointer to sturcture
 * @name: pointer to string
 * @age: integer age
 * @owner: pointer to string
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *new_dog = d;

	if (new_dog != 0)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}

}
