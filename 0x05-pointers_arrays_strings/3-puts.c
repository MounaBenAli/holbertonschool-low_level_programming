#include "main.h"

/**
  * _puts - Prints a string to the stdout
  *
  * @str: The string to print
  * Return: empty
  */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
