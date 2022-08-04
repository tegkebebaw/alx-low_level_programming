#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function to print numbers passed by separator
 *@separator : separator
 *@n : number of numbers to be printed
 *... : list of parameter passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list myary;
unsigned int i;
va_start (myary, n);
for (i = 0; i < n; i++)
{
if (separator)
printf("%d%s ", va_arg (myary, int), separator);
else
printf("%d", va_arg (myary, int));
}
printf("\n");
}
