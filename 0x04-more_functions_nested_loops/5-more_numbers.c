#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
	}
}
