#include "main.h"
#include <stdio.h>
/**
 * powerof - returns the natural square root of a number.
 * @n: input number.
 * @y: iterator.
 * Return: square root or -1.
 */
int powerof(int n, int y)
{
	if (y % (n / y) == 0)
	{
		if (y * (n / y) == n)
			return (y);
		else
			return (-1);
	}
	return (0 + powerof(n, y + 1));
}
/**
 * _sqrt_recursion - find factorial of a number.
 * @n: The parameter 1
 *Return: return square root of parameter passed.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else if (n == 1)
return (1);
else
return (powerof(n, 2));
}
