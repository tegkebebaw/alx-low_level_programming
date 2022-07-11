#include "main.h"
/**
 * more_numbers - print more number.
 * 
 * @i - temp variable
 *@j - temporary variable
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j=0; j < 15; j++)
{
_putchar(i+'0');
}
_putchar('\n');
}
}
