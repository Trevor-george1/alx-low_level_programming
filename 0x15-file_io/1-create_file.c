#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creats a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on succes -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
	b = write(f, text_content, strlen(text_content));
	if (b == -1)
	{
		close(f);
		return (-1);
	}
	}
	close(f);
	return (1);
}
