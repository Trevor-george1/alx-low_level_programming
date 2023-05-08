#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file
 * @letters: number of letters it should print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buff;
	ssize_t no_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
	{
		return (0);
	}
	no_bytes = read(f, buff, letters);
	if (no_bytes == -1)
	{
		close(f);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, no_bytes);
	close(f);
	free(buff);
	return (write_bytes);
}
