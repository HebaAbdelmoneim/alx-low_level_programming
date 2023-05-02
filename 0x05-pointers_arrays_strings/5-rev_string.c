#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 *@s: pointer to the char value of s
 *
 * Return: void
 */

void rev_string(char *s)
{
	int max = strlen(s), i;
	char *sw1, *sw2, rev;

	sw1 = s;
	sw2 = s + max - 1;

	for (i = 0; i < max / 2; i++)
	{
		rev = *sw2;
		*sw2 = *sw1;
		*sw1 = rev;

		sw1++;
		sw2--;
	}
}
