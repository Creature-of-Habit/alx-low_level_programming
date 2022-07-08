#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: the number of lines the triangle takes up.
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j > (i + 1); j--)
		{
			_putchar(' ');
		}

		for (k = 0; k < (i + 1); k--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
