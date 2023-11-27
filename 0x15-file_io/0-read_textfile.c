#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: letters to read
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t n_read, n_write;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_read);
}
