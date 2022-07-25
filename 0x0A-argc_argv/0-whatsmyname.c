#include <stdio.h>
/**
 *main - entry point
 *@arc - parameter 1
 *@argv - parameter lists
 *return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
else
printf("%s\n", argv[0]); 
return (0);
}
