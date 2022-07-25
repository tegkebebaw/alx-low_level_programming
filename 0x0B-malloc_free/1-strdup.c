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
int siz = strlen(str);
if (size == 0)
return ('\0');
else
{
unsigned int i = 0;
char *arry = (char *)malloc(sizeof(char) * size);
if (arry == NULL)
{
return ('\0');
}
else
{
while (i < size)
{
*(arry + i) = str[i];
i++;
}
return (arry);
}
}
}
