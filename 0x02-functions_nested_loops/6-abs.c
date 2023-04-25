#include "main.h"
/**
 * _abs - get the absolute value of an integer
 *
 * @n: the value the code will check
 *
 * Return: On success n.
 * On errror -n.
 */
int _abs(int n)
{
	int res;

	if (n >= 0)
	{
		res = n;
	}
	else
	{
		res = n * -1;
	}
	return (res);
}
