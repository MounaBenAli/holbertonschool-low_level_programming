#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * **alloc_grid- returns a pointer to a 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  * Return: should return NULL on failure
**/
int **alloc_grid(int width, int height)
{
int i;
int **arr;
arr = malloc(sizeof(int *) * height);

if (!arr)
free(arr);
return (NULL);

if (height <= 0)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
}
return (arr);
}
