#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: the number of lines the triangle takes up.
 *
 */

void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int k, j;

		for (j = size; j > (i + 1); j--)
		{
			_putchar(' ');
		}

		for (k = 0; k < (i + 1); k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
