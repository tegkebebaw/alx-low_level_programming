#include <stdio.h>
/**
 *main - entry point
 *@arc - parameter 1
 *@argv - parameter lists
 *return: Always 0 (success)
 */
int main(int argc, int *argv[3])
{
int i;
if (argc < 3)
{
printf("Error\n");
}
else
{
printf("%d\n", argv[1] * argv[2]);
}
return (0);
}
