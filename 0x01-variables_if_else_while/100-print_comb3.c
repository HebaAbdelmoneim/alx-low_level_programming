#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 48, y = 49;

while (x < 57)
{
	while (y < 58)
	{
		putchar (x);
		putchar (y);
		putchar (',');
		putchar (' ');
		y++;
	}
	x++;
}
putchar ('\n');
return (0);
}
