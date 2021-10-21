#include "main.h"
/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @i: left index
 * @j: right index
 * @p: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int i, int j, char *p)
{
if (i >= j)
return (1);
if (p[j] != p[i])
return (0);
return (check_palindrome(i + 1, j - 1, p));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int i;
i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
