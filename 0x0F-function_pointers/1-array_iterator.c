#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function which points to another function whch can do any thing in the given function
 ** @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function
 * Return: return nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t  i;
if (array && action)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
