#ifndef _HEADER_
#define _HEADER_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct printer - finds the function to use for print_all
 * @c: character to match
 * @f: function for that character
 */
typedef struct printer
{
	char a;
	void (*f)(va_list a);
} printer;

#endif
