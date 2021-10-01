#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf ("n:%zu is negative\n");
}
else if (n = 0) 
{
printf ("n:%zu is zero \n");
}
else (n > 0) 
{
printf( "n:%zu is positive\n");
}
return (0);
}
