#include "main.h"
/**
 * malloc_checked - check the code
 *@b: size of memory to be allocated
 * Return: pointer to allocated size if good.
 */
void *malloc_checked(unsigned int b)
{
char *c;
c = malloc(b);
if (c == NULL)
exit(98);
else
return (c);
}
