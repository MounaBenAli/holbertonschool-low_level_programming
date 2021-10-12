#include "main.h"
#include <string.h>
/**
* puts_half- Prints second half of string to the stdout
*
* @str: The string to print
* Return: empty
*/
void puts_half(char *str)
{
int len, i, n;
len = strlen(str);
n = len / 2;
if ((len % 2) == 1)
n++;
for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
