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
int i = 0, size = 1;
char *new;

if (str == NULL)
return (NULL);

while (str[size])
{
size++;
}

new = malloc((sizeof(char) * size) +1);
if (!new)
return (NULL);

while (i < size)
{
new[i] = str[i];
i++;
}

new[i] = '\0';
return (new);
}

