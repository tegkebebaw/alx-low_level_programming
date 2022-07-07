#include "main.h"
#include <stdio.h>
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
putchar('_');
}
putchar('\n');
}
printf("\n");
}
