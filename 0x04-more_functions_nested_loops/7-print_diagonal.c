#include "main.h"
/**
*print_diagonal - a function that draws a diagonal line on the terminal.
*
* @n :is the number of times the character \ should be printed
* Return: diagonal line
*/
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
