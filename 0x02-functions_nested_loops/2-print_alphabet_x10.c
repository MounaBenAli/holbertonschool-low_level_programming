#include "main.h"
/**
*print_alphabet_x10 -prints the alphabet ten times in lowercase
*
* Return: Always(Success)
*/
void print_alphabet_x10(void)
{
int count = 0;
char c;
while (count++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar ('\n');
};
