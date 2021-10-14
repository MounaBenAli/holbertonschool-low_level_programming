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
len1 = strlen(dest);
len2 = strlen(src);
for (i = 0; i <= len2; i++)
{
dest [len1 + i] = src[i];
}
return (dest);
}
