#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function which points to another function whch can search for given integer value
 *
 * Return: return index on sucess and -1 on fail to meet search.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
return (-1);
else
{
int i = 0;
for (i; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
  }
}
