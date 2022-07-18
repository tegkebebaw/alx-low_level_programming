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
char *bhaystack;
char *pneedle;
while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;
while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
