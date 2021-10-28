#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * *string_nconcat- concatenates the first n byte of s2 into s1
  * @s1: destination string
  * @s2: source string
  * @n: the specified number of characters in the souce string
  * Return: pointer to the concatenated string
  **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, size = 0;
	char *new;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = strlen(s1);
	k = strlen(s2);
	
	if (n >= k)
	size = i + k;
	else
	size = i + n;

	new = malloc(sizeof(char) * size + 1);
	if (!new)
	return (NULL);

	k = 0;
	while (j < size)
	{
	if (j <= i)
	new[j] = s1[j];

	if (j >= i)
	{
	new[j] = s2[k];
	k++;
	}
	j++;
	}
	new[j] = '\0';
	return (new);
}
