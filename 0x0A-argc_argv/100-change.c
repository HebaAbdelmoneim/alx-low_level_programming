#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_didgit - calculate the change
 *@val: integer input
 *
 * Return: integer value of the change
 */

int get_change(int val)
{
	int change = 0;

	while (val)
	{
		if (val >= 25)
		{
			change++;
			val -= 25;
		}
		else if (val >= 10)
		{
			change++;
			val -= 10;
		}
		else if (val >= 5)
		{
			change++;
			val -= 5;
		}
		else if (val >= 2)
		{
			change++;
			val -= 2;
		}
		else if (val == 1)
		{
			change++;
			val -= 1;
		}
	}
	return (change);
}
/**
 * main -  prints the minimum number of coins to make change
 *@argc: arg numbers
 *@argv: array of arg string
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int val = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);
		if (val < 0)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			printf("%i\n", get_change(val));
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}

