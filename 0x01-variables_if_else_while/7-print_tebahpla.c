#include <stdio.h>
/**
*main - Program that prints the alphabet in lowercase in reverse
*
* Return: Always(Success)
*/
int main(void)
{
char stmt[100];
int i;
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
for (i-- ; i >= 0; i--)
putchar(stmt[i]);
putchar('\n');
return (0);
}
