#include "search_algos.h"

/**
 * linear_search - searches for a value in an array/
 * using the Linear search algorithm
 * @array : a pointer to the first element of the array to search in
 * @size :  the number of elements in array
 * @value :  the value to search for
 *
 * Return:  the first index where value is located or if no value -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
		if (array[i] == value)
			return (i);
	return (-1);
}
