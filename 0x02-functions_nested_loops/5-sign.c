#include "main.h"
/**
 * print_sign- Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if n > 0
 * Return1: 0 and prints 0 if n equals 0
 * Return2: -1 and prints - if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
