#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free a 2 dimensional grid created in alloc_grid
 * @grid: the grid
 * @height: height of array
 * Return: should return NULL
 **/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid);

}
