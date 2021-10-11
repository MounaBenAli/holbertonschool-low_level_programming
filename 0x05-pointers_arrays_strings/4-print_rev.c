#include "main.h"

/**
  * print_rev - Prints a string in reverse to the stdout
  *
  * @s: The string to print
  * Return: empty
  */
void print_rev(char *s)
{
int len;
for (len = 0; *s != '\0'; s++)
len++;
while (len >= 0)
_putchar(*s--), len--;
_putchar(-1);
}		
