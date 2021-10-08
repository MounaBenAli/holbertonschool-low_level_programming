#include "main.h"
/**
*print_line -draws a straight line in the terminal.
*@n : the number of time the '-' will be printed
* Return: straigh line
*/
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
