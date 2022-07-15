#include "main.h"
#include <stdio.h>
/**
 *reverse_array - compair string s1 and s2,
 *@a: destination.
 *@n: source.
 */
void reverse_array(int *a, int n)
{
int i, j, nn;
for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
nn = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = nn;
}
}
}
