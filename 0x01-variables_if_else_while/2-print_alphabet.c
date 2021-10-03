#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Program that prints the alphabet in lowercase
*
* Return: Always(Success)
*/
char main(void)
{
char ch;
for (ch = ‘a’; ch <= ‘z’; ch++)
putchar(ch);
putchar (‘\n’);
return (0);
}
