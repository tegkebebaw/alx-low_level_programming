#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - find factorial of a number.
 * @x: The parameter 1
 *@y: parameter 2
 *Return: return xpower of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (0);
else
return (x + _pow_recursion(x, y - 1));
}
