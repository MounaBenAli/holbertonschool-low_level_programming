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
int i, j, n, l;
unsigned int k = 0;
n = strlen(s);
l = strlen(accept);
for (i = 0; i < n; i++)
{
for (j = 0; j < l; j++)
{
if (s[i] == accept[j])
break;
}
if (s[i] == accept[j])
k++;
if (s[i] != accept[j])
break;
}
return (k);
}

