#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	&& argv[2][0] != '/' && argv[2][0] != '%' && argv[2][0] != '\0')
	{
		printf("Error");
		exit(98);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
