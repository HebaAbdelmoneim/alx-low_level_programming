#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 48, y = 97;

while (x < 58)
{
	putchar (x);
	x++;
}
while (y < 103)
{
	putchar (y);
	y++;
}
putchar ('\n');
return (0);
}
