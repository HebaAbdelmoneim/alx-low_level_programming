#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two string length
 *@s1: pointer to the first string array
 *@s2: pointer to the second string array
 *
 * Return: 0 if the two strings have the same length.
 *1 if the first string is longer
 *-1 if the second string is longer
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 != '\0' || *s1 != '\0')
	{
		if (*s1 - *s2 == 0)
			res = 0;
		else
		{
			res = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
