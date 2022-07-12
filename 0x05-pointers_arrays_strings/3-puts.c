#include "main.h"

/**
 * _puts - function that prints a string to stdout.
 * @str: pointer with the adress of the string to be printed.
 *
 */

void _puts(char *str)
{
	int count = 0;

	while (1)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[count]);
			count++;
		}
	}
}
