#include<stdio.h>
/**
* main - Prints numbers of base 16(Hexadecimal).
*
* Return: Always (Success)
*/
int main(void)
{
char n;
char hex;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (hex = '% x'; hex <= '15'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
