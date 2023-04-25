#include "main.h"
/**
 * times_table- prints 9 times table  starting with 0
 *
 *
 * Return: 9 times table
 *
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			if ((times / 10) == 0)
			{
				if (j != 0)
				_putchar(' ');
				_putchar(times + 48);
			}
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
