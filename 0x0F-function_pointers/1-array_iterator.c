#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function which points to another function whch can do any thing in the given function
 *
 * Return: return nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i;
 for (i = 0; i < size; i++)
 {
    action(array[i]);
 }
}
