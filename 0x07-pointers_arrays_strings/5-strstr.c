#include "main.h"
/**
 *_strstr - find sub string,
 *@haystack: string to be searched on.
 *@needle: string to be searched
 *Return: the adress to first occurence of the string.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
char *mystack;
char *myneedle;
while (*haystack != '\0')
{
mystack = haystack;
myneedle = needle;
while (*haystack != '\0' && *pneedle != '\0' && *haystack == *myneedle)
{
haystack++;
myneedle++;
}
if (!*myneedle)
return (mystack);
haystack = mystack + 1;
}
return (0);
}
