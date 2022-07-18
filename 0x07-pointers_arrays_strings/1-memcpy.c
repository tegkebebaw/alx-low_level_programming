#include "main.h"
/**
 *_memcpy - copy memory,
 *@dest: memory destination.
 *@src: source to copied from.
 *@n: length of memory area to be copied.
 *Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = *(src+1);   
return (dest);
}
