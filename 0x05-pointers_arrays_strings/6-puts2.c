#include "main.h"
#include <unistd.h>
/**
 * puts2 - writes the character c to stdout
 * @str: The character to print
 *
 */
void puts2(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
}
