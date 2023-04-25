#include "main.h"
/**
 * _islower - chechk if the  char is lower or not
 *@c: the char ascii value the code will check it
 *
 * Return: On success  1.
 * On error, 0 is returned
 */

int _islower(int c)
{
	int res;

	if (c >= 97 && c <= 122)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
