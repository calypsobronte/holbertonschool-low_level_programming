#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pointer a pointer
 * @width: interp
 * @height: intero
 * Return: arr
*/
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);
else
{
int **arr =  malloc(height * (sizeof(int *)));
int a, b;
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (a = 0; a < height; a++)
{
arr[a] = malloc(width * (sizeof(int)));
if (arr[a] == NULL)
{
for (b = a; b >= 0; b++)
{
free(arr[a]);
}
free(arr);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
arr[a][b] = 0;
}
}
return (arr);
}
}