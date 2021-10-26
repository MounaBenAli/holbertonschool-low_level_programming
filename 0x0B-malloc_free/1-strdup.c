#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _strdup- allocates sufficient memory for the copy of str, does the dupe.
  * @str: source string
  * new: duplicated string
  * Return: a pointer to the duplicated string && return NULL if str = NULL
**/

char *_strdup(char *str)
{
char *new;
int i = 0, len = 0;
len = strlen(str);

if (str == NULL)
return (NULL);

new = (char *)malloc(sizeof(char) * len + 1);
if (!new)
{
return (NULL);
}

while (*str)
new[i++] = *str++;
new[i] = '\0';
return (new);
}
