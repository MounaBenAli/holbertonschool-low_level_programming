#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: constant number of parameters to be summmed
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
	{
	return (0);
	}

	va_start(args, n);

	sum = 0, i = 0;
	while (i < n)
	{
	i++;
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

