#include "main.h"
/**
 * isupper - chek if the later is small case or not.
 *@c : parameter passed
 *
 * return (int): return 1 if its capital otherwise 0.
 */
int _isupper (char c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
