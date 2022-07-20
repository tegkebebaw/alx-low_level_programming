#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string passed and end with new line.
 * @s: The string passed to print
 *
 */
void _puts_recursion(char *s)
{
int i;
for(i = 0; *(s + i) != '\0'; i++)
printf("%c", *(s + i));
printf("\n");
}
