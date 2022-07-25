#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - create array of size
 * @str: the size of the array
 *
 * Return: pointer to new string location.
 */
char *_strdup(char *str)
{
int size = strlen(str);
if (size == 0 || str == NULL)
return (NULL);
else
{
int i = 0;
char *arry = (char *)malloc(sizeof(char) * size);
if (arry == NULL || str == NULL)
{
return (NULL);
}
else
{
while (i <= size)
{
*(arry + i) = str[i];
i++;
}
return (arry);
}
}
}
