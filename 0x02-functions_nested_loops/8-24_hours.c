#include "main.h"
#include<unistd.h>
/**
 * jack_bauer- prints the time
 *
 *
 * Return: Time
 *
 */
void jack_bauer(void)
{
	int h = 00, m = 00;

	while (h < 24)
	{
		sleep(60);
		if (m == 59)
		{
			m = 0;
			h += 1;
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
		else
		{
			m += 1;
			if (h == 23 && m == 59)
			{
				m = 00;
				h = 00;
			}
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

