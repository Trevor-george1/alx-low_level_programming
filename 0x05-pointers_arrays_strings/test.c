#include <stdio.h>
#include <string.h>
void main(void)
{
	char numStr[] = "12345";
	char *str = numStr;
	int sign = 1; // 1 positive -1 nega
	int final = 0, result = 0;

	while (*str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	final = sign * result;


	printf("Converted Integer: %d\n", final);

	



	
}
