#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: number of times backslash character is to be printed
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0 ; i < n; i++)
		{
			int k;

			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
