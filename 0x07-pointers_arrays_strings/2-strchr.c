#include "main.h"
/**
 *_strchr - locate character,
 *@s: adress of string.
 *@c: character to be located
 *Return: the pointer to dest.
 */
char *_strchr(char *s, char c)
{
int i = 0, st = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
st = 1;
break;
}
i++;
}
if (st == 1)
return (s + i);
else
return('\0');
}
