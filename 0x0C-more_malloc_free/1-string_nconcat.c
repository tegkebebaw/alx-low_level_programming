#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code
 *@s1: string to copy
 *@s2: string to be copied from
 *@n: size of string to be copied from second argument
 * Return: pointer to allocated size if good.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
  unsigned int ln = strlen(s1), tlngth, i = 0, j = 0;
  tlngth = ln + n;
c = malloc(tlngth + 1);
if (c == NULL)
return(NULL);
else
{
while(*(s1 + i) != '\0')
{
*(c + i) = *(s1 + i);
i++;
}
while((*(s2 + j) != '\0') && (j <= n))
{
*(c + i) = *(s2 + j);
i++;
j++;
}
*(c + i) = '\0'; 
return (c);
}
}
