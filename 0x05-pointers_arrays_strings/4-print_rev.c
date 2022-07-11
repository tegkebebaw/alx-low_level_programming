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
int len = strlen(s);
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
int n = len  -count;
_putchar(str[n]);
count++;
}
}
