#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg numbers
 * @av: arg array
 *
 * Return: array of char
 */

char *argstostr(int ac, char **av)
{
	int i, j, width, count;
	char *ar;

	count = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	ar = malloc((ac * sizeof(av))+ 4);
	for (i = 0; i < ac; i++)
	{
		width = strlen(av[i]);
		for (j = 0; j < width; j++)
		{
			ar[count] = av[i][j];
			count++;
		}
		ar[count] = '\n';
		count++;
	}
	return (ar);
}