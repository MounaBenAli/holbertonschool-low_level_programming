#include "main.h"
#include <stdio.h>
/**
* 
* print_array - prints n elements of an array of integers
* @str: The string to print
* @n: the number of elements of the array to be printed
*
* Return: empty
*/
void print_array(int *a, int n)
{
int loop;
for(loop = 0; loop < (n - 1); loop++)
      printf("%d ", a[loop]);
}
