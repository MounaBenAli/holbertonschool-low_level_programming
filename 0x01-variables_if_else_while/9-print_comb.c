#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers with ','\' '
 *
 * Return: Always (Success)
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
