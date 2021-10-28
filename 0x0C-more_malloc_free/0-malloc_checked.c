#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked- allocates memory using malloc
  * @b:size to allocate
  * Return: pointer to the allocated memory
  **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!b)
	exit(98);
	return (p);
}
