#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range-creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: the pointer to the newly created array
 **/


int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size;

	size = max - min - 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
	return (NULL);

	if (min > max)
	return (NULL);

	if (max > min)
	{
	for (i = 0 ; i < size; i++)
	{
	arr[i] = min;
	min++;
	}
	}
	return (arr);
}
