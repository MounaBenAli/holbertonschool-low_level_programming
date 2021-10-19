#include "main.h"
/**
 * _strpbrk-locates the first occurence in the s of any of the bytes of accept.
 * @s: source string
 * @accept: accepted string
 * Return: a pointer *ptr to the byte in s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
