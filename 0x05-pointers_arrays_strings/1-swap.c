#include "main.h"
/**
 * swap_int - swap numbers
 *
 * @a : parameter 1.
 *@b : parameter 2.
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *b;
*b = *a;
*a = tmp;
}
