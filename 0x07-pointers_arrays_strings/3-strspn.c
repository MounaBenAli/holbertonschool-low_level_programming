#include "main.h"
#include <string.h>
/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: lengh /number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
int i, n, l;
n = strlen(s);
l = strlen(accept);
{
for (i = 0; i < n && i != '\0'; i++)
{
*s = *accept;
}
return(l);
}
}
