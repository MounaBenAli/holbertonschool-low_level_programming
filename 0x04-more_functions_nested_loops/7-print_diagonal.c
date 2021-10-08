#include "main.h"
/**
*print_most_numbers - a function that draws a diagonal line on the terminal.
*
* Return: Always(Success)
*/
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a= 1; a <= n; a++)
{
for (b = 1; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
