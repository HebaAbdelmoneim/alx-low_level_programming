#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 *@a: pointer to address of the first input variable
 *@b: pointer to address of the second input variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sp;

	sp = *b;
	*b = *a;
	*a = sp;
}
