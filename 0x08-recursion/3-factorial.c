#include "main.h"
#include <stdio.h>
/**
  * factorial - Returns the factorial of a given number.
  * @n: the number to be fact
  *
  * Return: Nothing.
  */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
{
return (n * factorial(n - 1));
}
}
