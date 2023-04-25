#include "main.h"
/**
 * print_times_table- prints the n times table, starting with 0
 *
 *@n: input pram
 *
 * Return: product n
 *
 */
void print_times_table(int n)
{
	int i, j, prodc;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prodc = i * j;
				if ((prodc / 100) != 0)
				{
					_putchar((prodc / 100) + 48);
					_putchar(((prodc / 100) % 10) + 48);
					_putchar((prodc % 10) + 48);
				}
				else if (((prodc / 10) != 0) && ((prodc / 100) == 0))
				{
					_putchar(' ');
					_putchar((prodc / 10) + 48);
					_putchar((prodc % 10) + 48);
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((prodc % 10) + 48);
				}
				if (j == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
