#include "main.h"
#include <stdio.h>
/**
 * print_line - chek if the later is small case or not.
 * 
 */
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
j=0;
for (; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
printf("\n");
}
