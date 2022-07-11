#include "main.h"
#include <unistd.h>
/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 */
void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
for (count--; count >= 0; count--)
_putchar(s[count]);
_putchar('\n');
}
