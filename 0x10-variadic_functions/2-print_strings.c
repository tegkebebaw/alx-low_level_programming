#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print strings passed by separator
 *@separator: separator
 *@n: number of numbers to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
if (n > 0)
{
va_list myary;
unsigned int i;
va_start (myary, n);
for (i = 0; i < n; i++)
{
if (va_arg (myary, char *) != NULL && i > n - 1)
printf("%s%s ", va_arg (myary, char *), separator);
else if (va_arg (myary, char *) == NULL && i > n - 1)
printf("%snil", va_arg (myary, char *));
else
printf("%s", va_arg (myary, char *));
}
printf("\n");
va_end(myary);
}
}
