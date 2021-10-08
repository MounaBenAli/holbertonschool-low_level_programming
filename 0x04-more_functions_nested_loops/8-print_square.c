#include "main.h"
/**
  * print_square - prints a square.
  * @size: The size of the square
  *
  * Return: empty
  */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
				_putchar ('\n');
}
