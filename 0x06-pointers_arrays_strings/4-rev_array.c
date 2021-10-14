#include "main.h"
#include <string.h>
/**
*reverse_array- Reverses the content of an array of integer
*@a: the array
*@n: is the number of elements of the array
*/
void reverse_array(int *a, int n)
{
int b[1000];
int i;
int c = 0;
for (i = n - 1; i >=  0; i--)
{
b[c] = a[i];
c++;
}
c = 0;
for (; c <= n - 1; c++)
a[c] = b[c];
}
