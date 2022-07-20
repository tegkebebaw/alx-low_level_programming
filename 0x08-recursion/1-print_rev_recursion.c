#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _print_rev_recursion - print a string passed in revers.
 * @s: The string passed to print
 *
 */
void _print_rev_recursion(char *s)
{
int i = strlen(s), j;
for(; i>0; i--)
{
printf("%c\n", *(s-i));
}
printf("\n");
}
