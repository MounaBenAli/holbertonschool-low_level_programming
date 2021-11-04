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
	va_list args;
	unsigned int i;
	int a;

	if (separator == NULL)
	printf("");

	va_start(args, n);

	i = 0;
	while (i < n)
	{
	i++;
	a = va_arg(args, int);
	printf("%d%s", a, separator);
	}
	printf("\n");

	va_end(args);
}

