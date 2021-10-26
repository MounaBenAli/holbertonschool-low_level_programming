#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *str_concat- concatenates two strings
  * @s1: destination string
  * @s2: source string
  * Return: pointer to the newly allocated space in memory of s1 and s2
**/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int s1_length = strlen(s1);
int s2_length = strlen(s2);
int size = s1_length + s2_length + 1;
char *new;

if (s1 == NULL || s2 == NULL)
return (NULL);

new = malloc((sizeof(char) * size) + 1);
if (!new)
return (NULL);

for (; i < s1_length; i++)
{
new[i] = s1[i];
}
for (; i < s2_length; i++)
{
new[s1_length + i] = s2[i];
new[size - 1] = '\0';
}
return (new);
}