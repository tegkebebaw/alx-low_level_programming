#include "main.h"
/**
 * print_square - chek if the later is small case or not.
 * @size - parameter passed
 *@i - initial variable
 *@j - variable
 */
void print_square(int size)
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
