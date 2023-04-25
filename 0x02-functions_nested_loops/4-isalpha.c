#include "main.h"
/**
 * _isalpha - chechk if the char is lowercase or uppercase or not
 *@c: the char ascii value the code will check it
 *
 * Return: On success  1.
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	int res;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		res = 1;
	}
	else
	{
	res = 0;
	}
	return (res);
}
