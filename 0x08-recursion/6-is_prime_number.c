#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if its prime number.
 * @n: The parameter passed
 *Return: return whether the number is prime or not.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (-1);
else if (n <= 3)
return (1);
else
{
if((n % 2 == 0 )|| (n % 3 == 0))
return (0);
else
return (-1);
}
}
