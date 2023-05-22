#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to string
 * @age: integer age
 * @owner: pointer to string
 *
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	
	my_dog->name = strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
