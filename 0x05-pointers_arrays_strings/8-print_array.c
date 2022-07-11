#include "main.h"
#include <unistd.h>
/**
 * print_array - prints array
 * @a: The array pointer
  * @n: The array length 
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
