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
char smal, cap = 'A';
for (smal = 'a'; smal <= 'z'; smal++)
{
putchar(smal);
}
for (; cap <= 'Z'; cap++)
{
putchar(cap);
}
putchar('\n');
return (0);
}
