#include<stdio.h>
/**
* main - prints all possible combinations of two-digit numbers with ','\' '
*
* Return: Always (Success)
*/
int main(void)
{
int ch, n;
for (ch = '0'; ch <= '9'; ch++)
{
for (n = '0'; n <= '9'; n++)
{
if (ch < n)
{
putchar(ch);
putchar(n);
if (ch != '8' || (ch == '8' && n != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
