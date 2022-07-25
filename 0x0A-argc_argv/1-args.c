#include <stdio.h>
/**
 *main - entry point
 *@argc - parameter 1
 *@argv - parameter lists
 *return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
if (*argv[0] == '\0')
printf("%d\n", 0);
else
printf("%d\n", argc - 1);
return (0);
}
