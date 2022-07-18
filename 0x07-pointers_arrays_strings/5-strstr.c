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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
