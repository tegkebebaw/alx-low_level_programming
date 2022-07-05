#include "main.h"
/**
 * _isalpha(int c) - chek if the variable is later small orcapital case or not.
 *
 * return(int): return 1 if its small case else 0.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
