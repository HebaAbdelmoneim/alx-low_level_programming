#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to integer
 * @size: size of the array
 * @action: ppinter to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size != 0 && action != NULL)
	{
		for (i  = 0; i < (int)size; i++)
			action(array[i]);
	}
}
