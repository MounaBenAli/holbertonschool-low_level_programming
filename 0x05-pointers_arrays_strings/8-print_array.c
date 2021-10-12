#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: array of integers
* @n: the number of elements of the array to be printed
*
* Return: empty
*/
void print_array(int *a, int n)
{
int loop;
for (loop = 0; loop < n ; loop++)
printf("%d ", a[loop]);
}
