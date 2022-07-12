#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer with the address of the string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;
	int cnt = 0;

	while (1)
	{
		if (s[cnt] == '\0')
		{
			break;
		}
		else
		{
			cnt++;
		}
	}
	for (i = (cnt - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
