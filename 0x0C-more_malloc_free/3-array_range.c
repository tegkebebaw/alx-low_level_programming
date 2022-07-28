#include "main.h"
#include <stdlib.h>
/**
 * array_range -  memory for an array.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the allocated array.
 */
int *array_range(int min, int max)
{
int *c;
unsigned int i, j;
  
if (min > max)
return (NULL);
j = max - min;
c = malloc(sizeof(int) * (j + 1));
if (c == NULL)
return (NULL);
for (i = 0; i <= j; i++)
c[i] = min + i;
return (c);
}
