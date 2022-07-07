#include "main.h"
/**
 * print_numbers - chek if the later is small case or not.
 * 
 * return (int): return 1 if its capital otherwise 0.
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 4 || i == 2)
{
continue
}
else
_putchar (i+'0');
}
_putchar("\n");
}
