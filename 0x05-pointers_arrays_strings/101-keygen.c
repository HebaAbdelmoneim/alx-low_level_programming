#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  check = 0;
	char pw;

	srand(time(NULL));

	while (check <= 2645)
	{
		pw = rand() % 128;
		putchar(pw);
		check += pw;
	}
	putchar(2772 - check);
	return (0);
}
