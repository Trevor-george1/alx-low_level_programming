#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be trancated
 * @text_content: string to be added
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	b = write(f, text_content, strlen(text_content));
	if (b == -1)
	{
	close(f);
	return (-1);
	}
	close(f);
	return (1);
}

