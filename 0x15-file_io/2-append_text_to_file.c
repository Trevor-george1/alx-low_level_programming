#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - appends text at end of file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	n_write = write(fd, text_content, strlen(text_content));
	if (n_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
