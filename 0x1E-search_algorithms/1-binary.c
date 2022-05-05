#include "search_algos.h"

int _binarySearch(int *arr, int left, int right, int x);
void _printSearch(int *array, int start, int end);

/**
 * binary_search - searches for a value in an array/
 * using the Binary  search algorithm (Divide && Conquer)
 * @array : a pointer to the first element of the array to search in
 * @size :  the number of elements in array
 * @value :  the value to search for
 *
 * Return:  the first index where value is located or if value not found -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, right = size - 1, left = 0;

	if (array == NULL)
		return (-1);

	i = _binarySearch(array, left, right, value);

	return (i);
}

/**
 * _binarySearch - implementing recursive Binary search algorithm
 * @arr : a pointer to the first element of the array to search in
 * @left : first element of the array
 * @right : last element of the array
 * @target :  the target element to be found
 *
 * Return:  the first index where value is located or if no value -1
 */
int _binarySearch(int *arr, int left, int right, int target)
{
	int mid;

	if (!arr)
		return (-1);

	if (left <= right)
	{
	_printSearch(arr, left, right);

	mid = (right + left) / 2;

	/*If the element is present at the middle itself*/
	if (arr[mid] == target)
		return (mid);

	/*If the element is smaller than mid, it can only be in the left subarray*/
	if (arr[mid] > target)
		return (_binarySearch(arr, left, mid - 1, target));

	/*Else the element can only be present in the right subarray*/
	return (_binarySearch(arr, mid + 1, right, target));
}

/*We reach this if element is not present in the array*/
return (-1);
}


/**
 * _printSearch- printing the searched array
 * @array : a pointer to the first element of the array to search in
 * @start : index of beginning
 * @end : index of end
 *
 * Return:  nothing
 */
void _printSearch(int *array, int start, int end)
{
	int j;

	j = start;
	printf("Searching in array: ");

	while (j <= end)
	{
		if (j > start)
		printf(", ");
		printf("%d", array[j]);
		j++;
	}

	printf("\n");
}
