#include "main.h"

/**
 *void swap_int - swaps the values of two integers
 *
 *@n: int to be updated
 *Return: empty
 */
void swap_int(int *a, int *b)
{
*a = *a+*b;
*b = *a-*b;
*a = *a-*b;
}
