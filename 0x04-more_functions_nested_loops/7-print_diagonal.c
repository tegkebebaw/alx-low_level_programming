#include "main.h"
/**
 * print_line - chek if the later is small case or not.
 * 
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
j=0;
for (; j <=i; j++)
{
_putchar('_');
}
_putchar('\n');
}
_putchar("\n");
}
