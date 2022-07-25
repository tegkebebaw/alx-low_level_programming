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
if (size == 0)
return ('\0');
else
{
unsigned int i = 0;
char *arry = (char *)malloc(sizeof(char) * size);
while (i < size && arry != null)
{
*(arry + i) = c;
i++;
}
return (arry);
}
}
