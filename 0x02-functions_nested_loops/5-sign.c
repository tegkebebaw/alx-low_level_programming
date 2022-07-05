#include "main.h"
/**
 * print_sign - Checks if the sign of number.
 *_putchar -print character
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
return (n);
}
else if (n == 0)
{
_putchar('0'+'0');
_putchar(',');
return (n); 
}
else
{
_putchar('-');
_putchar(',');
return (n);
}
}
