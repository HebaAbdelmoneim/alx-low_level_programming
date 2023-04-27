#include "main.h"

/**
 *_isdigit - Checks for digit from 0 to 9
 *
 * @c: input parameter
 *
 * Return: On success 1.
 * On errer 0.
 */

int _isdigit(int c)
{
	int res;

	if ((c >= 48) && (c <= 57))
		res = 1;
	else
		res = 0;

	return (res);
}
