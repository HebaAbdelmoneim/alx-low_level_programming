#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *@ac: arg numbers
 *@av: arg array
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int x, y, (*get_fun)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(av[1]);
	y = atoi(av[3]);
	get_fun = get_op_func(av[2]);
	if (get_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_fun(x, y));
	return (0);
}

