#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: array of char
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, l1, l2, len;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
		l1 = 0;
	if (s2 == NULL)
		l2 = 0;
	len = l1 + l2 + 1;
	ar = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		if (ar == NULL)
			return (NULL);
		if (i >= l1)
			ar[i] = s2[i - l1];
		else
			ar[i] = s1[i];
	}
	return (ar);
}
