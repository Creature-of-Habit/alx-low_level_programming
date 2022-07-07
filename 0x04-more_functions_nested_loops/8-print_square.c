#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: size of the square
 *
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int k;

			for (k = 0; k < n; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
