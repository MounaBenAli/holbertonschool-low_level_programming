#include "main.h"
#include <string.h>
/**
  * *_strncpy - Copies 2 strings at most n bytes
  ** @dest: Destination value
  * @src: Source value
  * @n: the specified number of characters in the src
  *
  * Return: the pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
int i, len1;
len1 = strlen(src);
for (i = 0 ; i < n && n != '\0'; i++)
{
dest[i] = src[i];
}
for (; len1 < n; len1++)
dest[len1] = '\0';
return (dest);
}

