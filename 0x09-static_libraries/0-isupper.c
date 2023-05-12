#include "main.h"

/**
 *_isupper - Checks for uppercase character
 *
 * @c: input parameter
 *
 * Return: On success 1.
 * On errer 0.
 */

int _isupper(int c)
{
	int res;

	if ((c >= 65) && (c <= 90))
		res = 1;
	else
		res = 0;

	return (res);
}
