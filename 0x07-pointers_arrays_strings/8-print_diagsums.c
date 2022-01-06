#include "main.h"
void print_diagsums(int *a, int size)
{
int i,j,n;
float a[10][10], sum=0.0;
for(i=0;i< n;i++)
{
for(j=0;j< n;j++)
{
if(i==j || i+j==n-1)
{
sum = sum + a[i][j];
}
}
}
return 0;
}
