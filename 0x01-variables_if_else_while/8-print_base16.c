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
int n=0x0;
for(; n <= 0xf; n++)
{
putchar( n + '0'); 
}
putchar('\n');
return (0);
}
