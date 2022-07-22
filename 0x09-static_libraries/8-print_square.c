#include "main.h"
/**
 * print_square - chek if the later is small case or not.
 * @size - parameter passed
 *@i - initial variable
 *@j - variable
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
j = 0;
for (; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
