#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(void)
{
int a, b, c;
printf("Please Enter Three different values\n");
scanf("%d %d %d", &a, &b, &c);
if (a > b && a > c)
{
printf("%d is the largest number\n", a);
}
else if (b > a && b > c)
{
printf("%d is the largest number\n", b);
}
else (c > a && c > b)
{
printf("%d is the largest number\n", c);
}
return (0);
} 
