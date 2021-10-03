#include <stdio.h>
/**
*main - Program that prints the alphabet in lowercas, and then in uppercase
*
* Return: Always(Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
