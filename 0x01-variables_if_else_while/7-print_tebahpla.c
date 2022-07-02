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
char tmp;
for (tmp = 'z'; tmp >= 'a'; tmp--)
{
putchar(tmp);
}
putchar('\n');
return (0);
}
