#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the file name
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(f, text_content, strlen(text_content));
	if (f == -1 || w == -1)
		return (-1);
	close(f);
	return (1);
}
