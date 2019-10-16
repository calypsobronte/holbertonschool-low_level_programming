#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - funcion de concatenates
 * @grind: intero pointer de  ponter
 * @height: tama;o
*/
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}
