#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of size
 * @size: the size of the array
 * @c: the charcter to initialize the array
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
return (null);
else
{
i = 0;
int *arry = (int *)malloc(sizeof(int) * size)
while (i < size)
{
*(arry+i) = c;
}
return (arry);
}
}
