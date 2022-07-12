#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer with the address of the string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;

	int len = _strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
