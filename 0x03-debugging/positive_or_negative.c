#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
if (i<0)
{
printf("%d is negative\n", i);
}
else if (i>0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
