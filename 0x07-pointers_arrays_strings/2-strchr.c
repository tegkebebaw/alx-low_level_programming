#include "main.h"
/**
 *_strchr - locate character,
 *@s: adress of string.
 *@c: character to be located
 *Return: the pointer to dest.
 */
char *_strchr(char *s, char c)
{
int i=0;

while (*(s+i) != '\0')
{
if (*(s+i)==c)
break;
}
return (s + i);
}
