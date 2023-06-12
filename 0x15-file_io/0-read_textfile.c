#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file name
 * @letters: the letters number
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr;
	char *read_data;
	ssize_t r = 0, w = 0;

	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
		return (0);
	read_data = malloc(sizeof(char) * letters);
	r = read(fptr, read_data, letters);
	w = write(STDOUT_FILENO, read_data, r);
	free(read_data);
	close(fptr);
	return (w);
}
