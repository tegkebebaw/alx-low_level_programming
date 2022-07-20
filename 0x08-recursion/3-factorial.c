#include "main.h"
#include <stdio.h>
/**
 * factorial - find factorial of a number.
 * @n: The parameter passed
 *return - return factorial of a number passed
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
