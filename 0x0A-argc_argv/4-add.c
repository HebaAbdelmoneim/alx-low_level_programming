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
	int sum = 0, i;
	char *nm;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			nm = argv[i];

			if (*nm >= '0' && *nm <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
