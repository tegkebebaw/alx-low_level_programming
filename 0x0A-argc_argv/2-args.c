#include <stdio.h>
/**
 *main - entry point
 *@arc - parameter 1
 *@argv - parameter lists
 *return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
