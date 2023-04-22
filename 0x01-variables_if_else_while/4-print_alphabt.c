#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 97;

while (x < 123)
{
	if (x != 113 && x != 101)
	putchar (x);
	x++;
}
putchar ('\n');
return (0);
}
