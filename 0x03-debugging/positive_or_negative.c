#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
positive_or_negative(int i)
{
	srand(time(0));
	if (i<0)
	{
	printf("%d is negative", i);
	}
	else if (i>0)
	{
	printf("%d is positive", i);
	}
	else
	{
	printf("%d is zero", i);
	}
	return (0);
}
