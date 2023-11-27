#include "main.h"

/**
 * _strlen - lenght of string
 * @c: char c
 *
 * Return: length
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i])
	{
		i++;
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content to write
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int n_write;
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY |  O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		n_write = write(fd, text_content, _strlen(text_content));
		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
