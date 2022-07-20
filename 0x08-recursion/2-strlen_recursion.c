#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - print a string length.
 * @s: The string passed
 *return - return the length of string
 */
int _strlen_recursion(char *s)
{
int i=0;
while(*(s+i( != '\0')
{
i++;
}
return i;
}
