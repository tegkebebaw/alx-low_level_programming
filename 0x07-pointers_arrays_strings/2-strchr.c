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
bool st=false;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
bool=true;
break;
}
if(bool)
return (s + i);
else
return('\0');
}
