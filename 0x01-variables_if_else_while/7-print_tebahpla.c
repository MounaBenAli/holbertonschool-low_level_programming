#include <stdio.h>
/**
*main - Program that prints the alphabet in lowercase in reverse
*
* Return: Always(Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
