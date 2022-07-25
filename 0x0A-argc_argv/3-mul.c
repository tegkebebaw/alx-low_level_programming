#include <stdio.h>
/**
 *main - entry point
 *@argc - parameter 1
 *@argv - parameter lists
 *return: Always 0 (success)
 */
int main(int argc, char *argv[3])
{
int i;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
return (0);
}
}
