#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print a string passed in revers.
 * @s: The string passed to print
 *
 */
void _print_rev_recursion(char *s)
{
while (*s != '\0')
{
  _print_rev_recursion(s+1);
  printf("%s\n", s);
}
}
