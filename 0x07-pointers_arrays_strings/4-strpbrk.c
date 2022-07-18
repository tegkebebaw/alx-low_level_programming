#include "main.h"
/**
 *_strpbrk - get the first much,
 *@s: adress of string.
 *@accept: string to be searched
 *Return: the adress to first search.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j, bool = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
bool = 1;
break;
}
}
if (bool == 1)
break;
}
if (bool == 1)
return (s + i);
else
return ('\0');
}
