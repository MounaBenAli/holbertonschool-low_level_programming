#include "main.h"
/**
  * _strlen_recursion - Returns the length of a string.
  * @s: the string to print
  *
  * Return: Nothing.
  */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
return (0);
else
{
i = _strlen_recursion(s + 1);
i++;
}
return (i);
}
