#include "main.h"
#include <string.h>
/**
  * puts_half- Prints second half of string to the stdout
  *
  * @str: The string to print
  * @n: the last charchters of the string
  * Return: empty
  */
void puts_half(char *str)
{
int len, i, n;
len = strlen(str);
n = len / 2;
for (i = n; i < len; i++)
{
_putchar(str[i]);
_putchar(n);
}
_putchar('\n');
}
