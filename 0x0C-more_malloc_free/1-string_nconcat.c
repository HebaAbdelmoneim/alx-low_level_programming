#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char array 1
 * @s2: char array 2
 * @n: number of char to be concatenated from s2
 *
 * Return: pointer to the new allocated array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int ln1, ln2, nn, size, i;

	ln1 = strlen(s1);
	ln2 = strlen(s2);
	if (n >= ln2)
		nn = ln2;
	else
		nn = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = ln1 + nn + 1;
	c = malloc(size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (size - 1); i++)
	{
		if (i < ln1)
			c[i] = s1[i];
		else
			c[i] = s2[i - ln1];
	}
	c[i] = '\0';
	return (c);
}

