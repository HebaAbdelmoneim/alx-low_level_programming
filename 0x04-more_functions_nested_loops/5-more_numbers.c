#include "main.h"

/**
 * more_numbers - Print the numbers from 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		x = 0;
		for (j = 48; j <= 58; j++)
		{
			if ((j == 58) || (x == 1))
			{
				x = 1;
				if (j == 58)
					j = 48;
				if (j == 53)
					break;
				_putchar(49);
			}
			_putchar(j);
		}
		_putchar('\n');
	}
}

