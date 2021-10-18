#include "main.h"
#include <string.h>
/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
int i = 0;
while (*s != c)
{
++s;
++i;
}
if (*s == c)
{
return (s);
}
else
{
return (0);
}
}
