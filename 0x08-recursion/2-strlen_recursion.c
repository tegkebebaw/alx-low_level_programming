#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - print a string length.
 * @s: The string passed
 *return - return the length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
  return (0);
}
else
return (1 + _print_rev_recursion(s + 1));
}
