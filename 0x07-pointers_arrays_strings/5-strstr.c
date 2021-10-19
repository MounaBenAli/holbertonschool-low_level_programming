#include "main.h"
/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char pointer
  */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != 0)
{
char *pt = haystack;
char *ptr = needle;
while (*haystack == *ptr && *ptr != 0 && *haystack != 0)
{
haystack++, ptr++;
}
if (*ptr == 0)
{
return (pt);
}
haystack = ++pt;
}
return (0);
}
