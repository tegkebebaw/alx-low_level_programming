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
char alpha;
for(alpha = 'a'; alpha <= 'z'; alpha++)
{
if(alpha == 'e' || alpha == 'q')
{
continue;
}
else
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
