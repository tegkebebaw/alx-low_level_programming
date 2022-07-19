#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - print chess board,
 *@a: two dimensional array parameter passed.
 *Return: return 0.
 */
void print_diagsums(int *a, int size)
{
int i, sum = 0;
for (i = 0; *(a + i) != '\0'; i += size)
{
sum += *(a + i);
}
printf("%d", sum);
}
