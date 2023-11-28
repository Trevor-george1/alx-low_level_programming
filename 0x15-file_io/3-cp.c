#include "main.h"
#include "3-error_exit.c"
/**
 * main - copies contents of a file to another
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read, n_write;
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) != 0)
	{
		if (n_read == -1)
		{
			error_exit(98, "Error: Can't read from %s\n", file_from);
		}
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1)
		{
			error_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_from\n");
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_to\n");
		exit(100);
	}
	return (0);
}
