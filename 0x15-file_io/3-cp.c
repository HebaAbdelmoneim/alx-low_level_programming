#include "main.h"

/**
 * main - check the code
 *
 * @ac: var number
 * @av: variables
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int f1, f2, w, r;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	f2 = open(av[1], O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	r = read(f2, buf, 1024);
	w = write(f1, buf, r);
	if (f1 == -1 || w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		free(buf);
		exit(99);
	}
	free(buf);
	close(f1);
	close(f2);
	return (0);
}
