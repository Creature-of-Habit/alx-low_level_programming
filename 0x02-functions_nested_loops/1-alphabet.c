#include "main.h"

/**
 * print_alphabet - print the alphabets in lowercase
 * ends in a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
