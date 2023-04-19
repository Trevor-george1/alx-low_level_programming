#include <stddef.h>
#ifndef HEADER_FILE_H
#define HEADER_FILE_H
void print_name(char *name, void (*f)(char *));

int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));
#endif
