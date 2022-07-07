#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if greater than zero. 0 if equal to zero. -1 if less than zero
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}

	return (result);
}
