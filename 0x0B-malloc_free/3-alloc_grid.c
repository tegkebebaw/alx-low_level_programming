#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - concatinate two string
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
if (width == 0 || height == 0)
return (NULL);
else
{
int **arry;
arry = (int *)calloc(height,sizeof(int)*width );
if (arry == NULL)
return (NULL);
else
return (arry);
}
}
