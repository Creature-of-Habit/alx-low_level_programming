#include "main.h"

/**
 * put2 - prints every other char of a string starting with the first
 * followed by a new line.
 * @str: pointer with address of string to be computed
 *
 */

void put2(char *str)
{
	int i;

	int len = 0;

	while (1)
	{
		if ((str[len] == '\0') || (str[(2 * len)] == '\0'))
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[(2 * len)]);
			len++;
		}
	}
}
