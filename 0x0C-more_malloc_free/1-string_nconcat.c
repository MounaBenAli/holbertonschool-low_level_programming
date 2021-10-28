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
/**
 * Write a function that concatenates two strings.

The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int s1_length , s2_length, size;
 	char *concat;

	
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	size = s1_length + s2_length + 1;

	if (n >= s2_length)
	n = s2_length;
	concat = calloc(n , (sizeof(unsigned int) * size));
	
		for (; i < s1_length; i++)
	{
		concat[i] = s1[i];
	}
	for (; j < n; j++)
	{
	concat[s1_length+ j] = s2[j];
	concat[i] = '\0';
	}
return (concat);
}
