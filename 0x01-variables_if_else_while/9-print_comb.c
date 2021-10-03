#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers with ','
 *
 * Return: Always (Success)
 */
int main(void)
{
int ch;
int c;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (c = ','; c)
{
putchar(c);
}
return (0);
}
