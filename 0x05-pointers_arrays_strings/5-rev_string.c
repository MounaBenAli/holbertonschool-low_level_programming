#include "main.h"
#include <string.h>
/**
  * rev_string - Reverses a string
  *
  * @s: The string to print
  * Return: empty
*/
void rev_string(char *s)
{
char c;
int len, i;
len = strlen(s);
for (i = 0; i < (len / 2) ; i++)
{
c = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = c;
}
}
