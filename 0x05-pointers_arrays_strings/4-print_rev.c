#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
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
