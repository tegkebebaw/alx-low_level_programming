#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - print a string length.
 * @s: The string passed
 *return - return the length of string
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
  return 1;
}
else
return(1 + int(_print_rev_recursion(s + 1)));
}
