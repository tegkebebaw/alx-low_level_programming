#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string from src to des,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

while (count >= 0)
{
if (*(src + count) == '\0')
break;
count++;
}
 while (count2 >= 0)
{
if (*(src + count) == '\0')
break;
*(dest + count) = *(src + count);
count++;
count2++;
}
return (dest);
}
