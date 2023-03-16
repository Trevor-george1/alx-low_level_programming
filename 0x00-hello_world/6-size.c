#include <stdio.h>
/**
 *main -Entry point
 *
 * Return: Always 0 (success)
 */
 int main(void)
{

	printf("Size of a char is: %ld byte(s)", sizeof(char));
	printf("Size of an int is: %ld byte(s)", sizeof(int));
	printf("Size of a long is: %ld byte(s)", sizeof(long));
	printf("Size of a long long is: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));

	return (0);
}
