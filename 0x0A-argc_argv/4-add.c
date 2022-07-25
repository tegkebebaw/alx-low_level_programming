#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entry point
 *@argc : parameter 1
 *@argv : parameter lists
 *Return: Always 0 (success) or 1 failed
 */
int main(int argc, char *argv[])
{
int i, sum = 0, j;
for (i = 1; i < argc; i++)
{
for (j = 0; j < argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
