#include <string.h>
#include "main.h"

/**
 * _atoi - convert the numbers in string to integer
 *@s: pointer to string
 *
 * Return: integer of the input char
 */

int _atoi(char *s)
{
	int length, i, digit, sign = 0, no;
	unsigned oint = 0;
	char prev;

	length = strlen(s);
	for (i = 0; i <= length; i++)
	{
		if (*s == 45)
			sign++;
		if (*s >= 48 && *s <= 57)
		{
			digit = *s - 48;
			oint = (oint * 10) + digit;
		}
		prev = *s;
		s++;
		if (!(*s >= 48 && *s <= 57) && (prev >= 48 && prev <= 57))
			break;
	}
	if (sign % 2 != 0)
		no = -1 * oint;
	else
		no = oint;
	return (no);
}

