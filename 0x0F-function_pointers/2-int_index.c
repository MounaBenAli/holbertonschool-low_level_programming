#include "function_pointers.h"

/**
 *int_index - searches for an integer inside an array
 *@array : array of integer
 *@size : size of array
 *@cmp : pointer to function to compare the integer
 *
 *Return: index otherwise (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (!array || !cmp || size <= 0)
return (-1);

for (index = 0; index < size; index++)
{
if (cmp(array[index]))
return (index);
}

return (-1);
}
