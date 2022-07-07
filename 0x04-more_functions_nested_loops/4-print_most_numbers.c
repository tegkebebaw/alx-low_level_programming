#include "main.h"
/**
 * print_most_numbers - print most of the numbers.
 * @i - temporary variable
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 4 || i == 2)
{
continue;
}
else
_putchar (i + '0');
}
_putchar('\n');
}
