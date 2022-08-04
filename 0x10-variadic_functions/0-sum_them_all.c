#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to return sum of numbers passed
 *@n: number of parameter passed
 *... : list of parameter passed
 * Return: Always sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
if ( n == 0)
return 0;
else
{
va_list myary;
unsigned int i, sum;
va_start (myary, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (myary, int);
va_end (myary);
return sum;
}
}
