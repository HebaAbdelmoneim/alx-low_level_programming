#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *@argc: arg numbers
 *@argv: array of arg string
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *nm;

	nm = argv[0];

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*(nm + i) < '0' || *(nm + i) > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
