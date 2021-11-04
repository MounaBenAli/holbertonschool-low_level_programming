#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string ", " to be printed between numbers
 * @n : number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;


	va_start(strings, n);

	i = 0;
	while (i < n)
	{
	str = va_arg(strings, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (i != n - 1 && separator != NULL)
	printf("%s", separator);
	i++;
	}

	printf("\n");

	va_end(strings);
}
