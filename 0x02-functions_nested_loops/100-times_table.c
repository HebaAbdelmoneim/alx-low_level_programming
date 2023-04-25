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

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prodc = i * j;
				if (prodc <= 9)
					_putchar(' ');
				if (prodc <= 99)
					_putchar(' ');

				if (prodc >= 100)
				{
					_putchar((prodc / 100) + 48);
					_putchar(((prodc / 10) % 10) + 48);
				}
				else if (prodc <= 99 && prodc >= 10)
					_putchar((prodc / 10) + 48);
				_putchar((prodc % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
