#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#define BUFFER 1024

/**
 * err_exit - returns error
 * @file_from: file from
 * @file_to: file to
 * @argv: text to dispaly
 * Return: nothing
 */

void err_exit(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write ti %s\n", argv[2]);
	exit(99);
	}
}

/**
 * main - enrty point
 * @argc: number of argumnets
 * @argv: list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND | O_WRONLY, 0664);
	err_exit(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buff, 1024);
		if (n == -1)
			err_exit(-1, 0, argv);
		nwr = write(file_to, buff, n);
		if (nwr == -1)
			err_exit(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cna't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cna't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
