#include <stdio.h>
#include <string.h>
void main(void)
{
	int arr[5] = {1,  2, 3, 4, 5};
	int *a;
	int count = 3, i;

	a = arr;

	for (i = 0; i < count; i++)
		if (i != count - 1)
		{
		printf("%d, ", *(a + i));
		}
		else
		{
		printf("%d", *(a + i));
		}
	printf("\n");

	



	
}
