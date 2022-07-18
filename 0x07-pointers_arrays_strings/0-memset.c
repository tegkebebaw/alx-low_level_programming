#include "main.h"
/**
 *_memset - fill memory with constatns,
 *@s: memory to write into.
 *@b: character to fill in.
 *@n: length of memory area to fill.
 *Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
*(s + i) = b; 
return (s);
}
