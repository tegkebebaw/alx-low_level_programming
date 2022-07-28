#include "main.h"
/**
 * malloc_checked - check the code
 *@b - size of memory to be allocated
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
    char *c;
    c = malloc(b);
  if (c = malloc(b))
    return c;
  else
    exit(98);
}
