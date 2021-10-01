#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the last digit of the number sorted in the variable.
*
* Return: Always (Sucess)
*/
int main(void)
{
int n= %d;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %d is 0 and is zero\n", n);
}
else if (n < 6)
{
printf("Last digit of %d is %d and is les than 6 and not 0 \n");
}
return (0);
}
