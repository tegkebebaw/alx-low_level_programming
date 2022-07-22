#include "main.h"
#include <unistd.h>
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 *
 */
void _puts(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
