#include "main.h"

/**
  * print_rev - Prints a string in reverse to the stdout
  *
  * @s: The string to print
  * Return: empty
  */
void print_rev(char *s)
{
int i, c = 0;
for (i = 0; s[i] !='\0'; i++)
c++;
for (i = c -1; i >= 0; i --)
_putchar(s[i]);
}
