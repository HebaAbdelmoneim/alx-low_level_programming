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
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		sleep(60);
		if (m == 59 && h != 23)
		{
			m = 0;
			h += 1;
		}
		else
		{
			m += 1;
			if (h == 23 && m == 60)
			{
				m = 00;
				h = 00;
			}
		}
	}
}

