#include "holberton.h"
#include <stdio.h> 
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);
else
{
char **arr = (int **) malloc(height * (sizeof(int *)));
int a, b, c;
if (arr == NULL)
{
free(arr);
return (NULL)
}
for (a = 0; a < height; a++)
{
arr[a] = malloc(width(sizeof(int)));
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
}

}