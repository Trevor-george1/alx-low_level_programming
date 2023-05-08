#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#define BUFFER 1024

/**
 * err_exit - returns error
 * @c: code
 * @text: text to dispaly
 * Return: nothing
 */

void err_exit(int c, const char *text)
{
	dprintf(STDERR_FILENO, "Error: %s\n", text);
	exit(c);
}

/**
 * cpy_file - copy file form src to dest
 * @src: source file
 * @dest: destintion
 * Return: nOthing
 */
void cpy_file(const char *src, const char *dest)
{
	int fsrc, fdest, b, bw;
	char buffer[BUFFER];

	fsrc = open(src, O_RDONLY);
	if (fsrc == -1)
	{
		err_exit(98, "Can't read from file");
	}
	fdest = open(dest, O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fdest == -1)
		err_exit(99, "Can't read from file");
	while ((b = read(fsrc, buffer, BUFFER)) > 0)
	{
		bw = write(fdest, buffer, b);
		if (bw != b)
			err_exit(99, "Can't read from file");
	}
	if (b == -1)
		err_exit(98, "Can't read from file");
	if (close(fsrc) == -1)
		err_exit(100, "Cant close f");
	if (close(fdest) == -1)
		err_exit(100, "Can;t close f");
}

/**
 * main - enrty point
 * @argc: number of argumnets
 * @argv: list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *fsrc;
	const char *fdest;

	if (argc != 3)
		err_exit(97, "Usage: cp file_from file_to");
	fsrc = argv[1];
	fdest = argv[2];
	cpy_file(fsrc, fdest);
	return (0);
}
