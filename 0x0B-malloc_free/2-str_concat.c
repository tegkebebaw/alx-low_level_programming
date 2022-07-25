#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string location.
 */
char *str_concat(char *s1, char *s2)
{
int size = strlen(s1), size2 = strlen(s2);
if (size == 0 || size2 == 0)
return (NULL);
else
{
int i = 0, j = 0;
unsigned int totalsize = size + size2;
char *arry = (char *)malloc(sizeof(char) * totalsize);
while (*(s1 + i) != '\0')
{
*(arry+i) = *(s1 + i);
i++;
}
while (*(s2 + j) != '\0')
{
*(arry+i) = *(s2 + j);
i++;
j++;
}
return (arry);
}
}
