#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 97, y = 65;

while (x < 123)
{
	putchar (x);
	x++;
}
while (y < 91)
{
	putchar (y);
	y++;
}
putchar ('\n');
return (0);
}
