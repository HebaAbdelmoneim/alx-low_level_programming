#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char array1
 * @s2: char array2
 * @n: number of char to be concatenated from s2
 *
 * Return: pointer to the new allocated array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int ln1, ln2, nn, size, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	ln1 = strlen(s1);
	ln2 = strlen(s2);
	if (n >= ln2)
		nn = ln2;
	else
		nn = n;
	size = ln1 + nn;
	ar = malloc(size + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i >= ln1)
			ar[i] = s2[i - ln1];
		else
			ar[i] = s1[i];
	}
	ar[i] = '\0';
	return (ar);
}

