#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_didgit - check if the string is digits
 *@s: array of arg string
 *
 * Return: Always 0 on success.
 * 1 on fail.
 */

int check_didgit(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (!isdigit(s[j]))
			return (0);
		j++;
	}
	return (1);
}

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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (check_didgit(argv[i]))
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

