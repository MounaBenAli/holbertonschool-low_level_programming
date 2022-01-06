int main()
{
  int i, lenght = 0, fib, sum, sum1, sum2, a, b, c;
  printf("\nFirst number: ");
  scanf("%d", &a);
  printf("\nSecond number: ");
  scanf("%d", &b);
  printf("\nHow long?: ");
  scanf("%d", &lenght);

  {
    while ((a > b) || ((lenght < 2) || (lenght > 100)))
    {
      printf("\nFirst number: ");
      scanf("%d", &a);
      printf("\nSecond number: ");
      scanf("%d", &b);
      printf("\nHow long?: ");
      scanf("%d", &lenght);
    }
  }

  printf("%d\t%d\t", a, b);
  printf("%d\t", fib);
  for (i = 3; i < lenght; i++) {
    if (i <= 1) fib = i;
    else {
      a = b;
      b = fib;
      fib = a + b;
    }

    printf("%d\t", fib);
  }
}
