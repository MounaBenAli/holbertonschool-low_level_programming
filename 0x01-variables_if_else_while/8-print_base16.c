#include<stdio.h>
/**
* main - Prints numbers of base 16(Hexadecimal)in lower case.
*
* Return: Always (Success)
*/
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
