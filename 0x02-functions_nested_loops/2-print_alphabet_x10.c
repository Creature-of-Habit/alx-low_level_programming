#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase ten times
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char k;

		for (k = 'a'; k < 'z'; k++)
		{
			_putchar(k);
		}

		_putchar('\n');
	}
}
