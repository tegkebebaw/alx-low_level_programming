#include "main.h"
/**
 * print_diagonal - chek if the later is small case or not.
 *@i - initial variable
 *@j - temp variable
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
j=0;
for (; j <=i; j++)
{
_putchar(' ');
}
_putchar('\n');
}
}
