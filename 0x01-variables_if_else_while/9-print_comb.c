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
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0'); 
if (n == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
