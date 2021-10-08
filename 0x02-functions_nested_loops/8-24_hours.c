#include "main.h"
/**
 * jack_bauer - print every minute of the day starting from 00:00 to 23:59.
 *
 *not return
 */
void jack_bauer(void)
{

	int a, b, i, j, l;

	l='9';
	for (a = '0'; a <= '2'; a++)
	{
		if (a == '2')
		l = '3';
		{
			for (b = '0'; b <= l; b++)
			{
				for (i = '0'; i <= '5'; i++)
				{
					for (j = '0'; j <= '9'; j++)
					{_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
					}
				}
			}
		}
	}
}
