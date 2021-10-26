#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array- Creates an array of chars,intiliazes it with a specific char
  * @size: of the array
  * @c: the first char of the array
  * Return: NULL if is size = 0
  * Return: a pointer to the array, or NULL if it fails
  **/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
if (size > 0)
{
for (i = 0 ; i < size; i++)
{
array[i] = c;
}
}
else
{
return (NULL);
}
return (array);
}
