#include "main.h"
#include <string.h>
/**
  * *_strncat - Concatenates 2 strings
  ** @dest: Destination value
  * @src: Source value
  * @n: the specified number of characters in the srcstring
  *
  * Return: the pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
int i, len1;
len1 = strlen(dest);
if (n > len1)
n = len1;
for (i = 0; i < n; i++)
{
dest[len1 + i] = src[i];
}
return (dest);
}
