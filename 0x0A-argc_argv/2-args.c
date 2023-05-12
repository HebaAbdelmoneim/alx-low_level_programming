#include <stdio.h>

/**
 * main - prints all arguments it receives
 *@argc: arg numbers
 *@argv: array of arg string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
