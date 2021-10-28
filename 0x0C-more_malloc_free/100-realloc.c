#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer to previous memory block
 * @old_size: previuos memory block size
 * @new_size: posterior memory block size
 * Return: ptr (Success) NULL (Failed)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new;

if (new_size == old_size)
return (ptr);

if (!ptr)
new = malloc(new_size);

if (new_size == 0)
{
free(ptr);
return (NULL);
}

free(ptr);
return (new);
}
