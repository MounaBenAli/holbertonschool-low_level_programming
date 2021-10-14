#include "main.h"
#include <string.h>
/*
 * */

char *_strncpy(char *dest, char *src, int n)
{
int i, k, len1;
len1 = strlen(dest);
k = 0;
if (n > len1)
n = len1;
for (i = 0 ; i < n && n != '\0'; i++)
{
dest[len1 + i] = src[i];
k++;
}
return (dest);
}

