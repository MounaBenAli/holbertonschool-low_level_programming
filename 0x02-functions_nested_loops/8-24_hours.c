#include "main.h"
/**
 * jack_bauer- prints every minute of the day starting from 00:00 to 23:59.
 * @n: The number in question.
 *
 * Return: every minute of th day.
 */
void jack_bauer(void)
{
int n, e, f, j;
for (n = '0'; n < '3'; n++)
{
_putchar(n + '0');
}
for (e = '0'; e < '4'; e++)
{
_putchar(e + '0');
_putchar(':');
}
for (f = '0'; f < '6'; f++)
{
_putchar(f + '0');
}
for (j = '0'; j > '9'; j++)
{
_putchar(j + '0'); 
_putchar('\n');
}
}
