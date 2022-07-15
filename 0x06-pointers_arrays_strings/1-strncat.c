#include "main.h"
#include <stdio.h>
/**
 *_strncat - copies string from src to des,
 *@dest: destination.
 *@src: source.
 *@n: number of character to be concatinated.
 *Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{    
int count = 0, count2 = 0;
while (count >= 0)
{
if (*(dest + count) == '\0')
break;
count++;
}
while (count2 >= 0)
{
if ((*(src + count2) == '\0') || (count2 >= n))
break;
*(dest + count) = *(src + count2);
count++;
count2++;
}
return (dest);
}
