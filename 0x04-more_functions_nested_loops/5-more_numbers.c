#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	char i, j, k, n;

	n = '0';

	for (i = 0; i <= 10; i++)
	{
		_putchar(i);
	}
	for (j = 1; j <= 5 ; j++)
	{
		_putchar('1');

		for (k = n; k <= '4'; k++)
		{
			_putchar(k);
			break;
		}
		n++;

	}

}
