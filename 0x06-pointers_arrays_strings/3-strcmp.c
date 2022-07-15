#include "main.h"
#include <stdio.h>
/**
 *_strcmp - compair string s1 and s2,
 *@s1: destination.
 *@s2: source.
 *Return: the integer value.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, reg = 0;
while (reg == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
reg = *(s1 + i) - *(s2 + i);
i++;
}
return (reg);
}
