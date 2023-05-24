#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *@ac: arg numbers
 *@av: arg array
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s = (char *)main;
	int nu, i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nu = atoi(av[1]);
	if (nu < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = nu; i > 0; i--)
	{
		printf("%02hhx ", s[i]);
	}
	printf("\n");
	return (0);
}

