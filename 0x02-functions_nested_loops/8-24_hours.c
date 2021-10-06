#include "main.h"
/**
 * jack_bauer- prints every minute of the day starting from 00:00 to 23:59.
 * @n: The number in question.
 *
 * Return: every minute of th day.
 */
void
jack_bauer (void)
{
int a, b, c, d;
for (a = 0; a < 3; a++)
{
for (b = 0; b < 4; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 9; d++)
{
_putchar (a);
_putchar (b);
_putchar (c);
_putchar (d);
_putchar ('\n');
}
}
}
}
}
