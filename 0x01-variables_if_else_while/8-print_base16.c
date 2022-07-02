#include <stdio.h>
/**
* main - Entry point
*putchar - print function
*
* Return: Always 0 (Success)
* putchar: print 0 (string)
*/
int main(void)
{
int n = 0x0;
char ltr = 'a';
for (; n <= 0xf; n++)
{
if (n >= 10)
{
putchar(ltr);
ltr++;
}
else
putchar(n + '0');
}
putchar('\n');
return (0);
}
