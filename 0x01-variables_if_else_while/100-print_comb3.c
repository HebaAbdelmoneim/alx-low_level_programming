#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;

x = 48;
while (x < 57)
{
	y = x + 1;
	while (y < 58)
	{
		putchar (x);
		putchar (y);
		if (x == 56)
			break;
		putchar (',');
		putchar (' ');
		y++;
	}
	x++;
}
putchar ('\n');
return (0);
}
