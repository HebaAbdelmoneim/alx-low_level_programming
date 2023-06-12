#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the file name
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_APPEND);
	if (text_content)
		len = strlen(text_content);
	w = write(f, text_content, len);
	if (f == -1 || w == -1)
		return (-1);
	close(f);
	return (1);
}
