#include "function_pointers.h"

/**
 *array_iterator - executes a function as a parameter for elements of an array
 *@array: array of integer
 *@size: size of array
 *@action: pointer to function
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL || action != NULL)

{
for (i = 0; i < size; i++)
action(array[i]);
}

}

