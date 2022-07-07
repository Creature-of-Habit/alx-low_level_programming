#include "main.h"

/**
 * print_line - prints a line using the undescore character.
 * @n: number of times the underscor character is printed.
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
