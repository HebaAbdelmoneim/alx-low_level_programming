#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_size - count char in av
 * @ac: arg numbers
 * @av: arg array
 *
 * Return: integer the size
 */

int get_size(int ac, char **av)
{
        int s, i;

	s = 0;
	for (i = 0; i < ac; i++)
	{
		s+= strlen(av[i]);
	}
        return (s + 1 + ac);
}
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg numbers
 * @av: arg array
 *
 * Return: array of char
 */

char *argstostr(int ac, char **av)
{
	int i, j, width, count, s;
	char *ar;

	count = 0;
	s = get_size(ac, av);
	if (ac == 0 || av == NULL)
		return (NULL);

	ar = malloc(s * sizeof(char));
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
