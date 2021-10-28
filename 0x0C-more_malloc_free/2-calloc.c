#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc-allocates memory for an array using malloc
  * @nmemb: number of members
  * @size: size
  * Return: pointer to the allocated memory
  **/

void *_calloc(unsigned int nmemb, unsigned int size)
	{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(nmemb * size);
	if (!p)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
	p[i] = 0;
	}
	return (p);
	}
