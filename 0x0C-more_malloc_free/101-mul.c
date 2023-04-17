#include <stdio.h>
#include <stdlib.h>
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	len++;
	return (len);
}
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
int check_number(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
	if (!is_digit(str[i]))
	return (0);
	}
	return (-1);
}
void print_error(void)
{
	printf("Error\n");
	exit(98);
}
int *mul(int *num1, int num2, int len1, int len2)
{

	int i, j;
	int *result = malloc(sizeof(int) * (len1 + len2));

	for (i = 0; i < len1 + len2; i++)
	result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
	for (j = len2 - 1; j >= 0; j--)
	{
	result[i + j + 1] += num1[i] * num2[j];
	result[i + j] += result[i + j + 1] / 10;
	result[i + j + 1] %= 10;
	}
	}
	return (result);
}
void print_number(int *num, int len)
{
	int i;
	int leading = 1;

	for (i = 0; i < len; i++)
	{
	if (num[i] != 0)
	leading = 0;
	if (!leading)
	printf("%d", num[i]);
	}
	if (leading)
	printf("0");
	printf("\n");
}
int main(int argc, char **argv)
{
    int *num1, *num2, *result;
    int len1, len2, len_result;
    int i;

    if (argc != 3)
        print_error();

    if (!check_number(argv[1]) || !check_number(argv[2]))
        print_error();

    len1 = str_len(argv[1]);
    len2 = str_len(argv[2]);

    num1 = malloc(sizeof(int) * len1);
    num2 = malloc(sizeof(int) * len2);

    for (i = 0; i < len1; i++)
        num1[i] = argv[1][i] - '0';

    for (i = 0; i < len2; i++)
        num2[i] = argv[2][i] - '0';

    result = multiply(num1, num2, len1, len2);
    len_result = len1 + len2;
    while (result[len_result - 1] == 0 && len_result > 1)
        len_result--;

    print_number(result, len_result);

    free(num1);
    free(num2);
    free(result);

    return 0;
}
