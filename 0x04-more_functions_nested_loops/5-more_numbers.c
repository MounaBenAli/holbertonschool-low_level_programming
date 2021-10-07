#include "main.h"
/**
* more_numbers- prints 10 times the numbers, from 0 to 14.
* Return: Always(Success)
*/
void more_numbers(void)
{
int a, i;
while (i++ <= 9)
{
for (a = '0'; a <= 14; a++)
_putchar(a);
_putchar ('\n');
}
}
