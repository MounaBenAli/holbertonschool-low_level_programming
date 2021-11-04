#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string ", " to be printed between numbers
 * @n : number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int a;

	va_start(numbers, n);

	i = 0;
	while (i < n)
	{
	a = va_arg(numbers, int);
	printf("%d", a);

	if (i != n - 1 && separator != NULL)
	printf("%s", separator);

	i++;
	}
	printf("\n");

	va_end(numbers);
}
