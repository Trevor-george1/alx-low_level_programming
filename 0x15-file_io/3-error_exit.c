#include "main.h"
/**
 * error_exit - error and exit
 *
 * @code: code
 * @format: fomrat
 * @arg: arg
 * Return: Nothing
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
