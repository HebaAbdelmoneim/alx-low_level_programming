#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;

for (x = 48; x < 57; x++)
{
	for (y = x+1; y < 58; y++)
	{
		putchar (x);
		putchar (y);
		if (x == 56)
			break;
		putchar (',');
		putchar (' ');
	}
}
putchar ('\n');
return (0);
}
