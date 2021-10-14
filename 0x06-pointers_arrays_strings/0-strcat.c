#include "main.h"
#include <string.h>
/**
  * *_strcat - Concatenates two strings(appends the entire scr to dest)
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcat(char *dest, char *src)
{
int i, len1, len2;
len1 = strlen(src);
len2 = strlen(dest);
for (i = 0 ; i <= len1; i++)
{
dest[len2 + i] = src[i];
}
dest[i] = '\0';
return (dest);
}
