#include "main.h"
/**
 * print_triangle - entry point.
 * return - return 0 allways
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i,j;
for (i = 0; i < size; i++)
{
for (j = size; j > i; j--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
