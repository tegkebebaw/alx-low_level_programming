#include "main.h"
/**
 *_strspn - get the prefix length,
 *@s: adress of string.
 *@accept: string to be searched
 *Return: the index until the first much.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, bool;
for (i = 0; *(s + i) != '\0'; i++)
{
bool = 1;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
