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
char smal;
for (smal = 'a'; smal <= 'z'; smal++)
{
putchar(smal);
}
putchar('\n');
return (0);
}
