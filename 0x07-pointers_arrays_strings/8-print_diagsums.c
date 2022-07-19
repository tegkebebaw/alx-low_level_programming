#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - print chess board,
 *@a: two dimensional array parameter passed.
 *Return: return 0.
 */
void print_diagsums(int *a, int size)
{
int i, j, cnt=0, sum = 0;
for (i = 0; size; i++)
{
for (j = 0; size; j++)
{
if(i == j)
sum += *(a + cnt);
cnt++;
}
}
printf("%d", sum);
}
