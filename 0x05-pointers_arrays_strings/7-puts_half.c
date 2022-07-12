#include "main.h"

/**
 * puts_half - prints half of a string followed by newline
 * @str: pointer with address of string to be computed
 *
 */

void puts_half(char *str)
{
	int n;

	int i = 0;
	int length = 0;
	
	while (1)
	{
		if (str[length] == '\0')
		{
			break;
		}
		else
		{ 
			length++;
		}
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length -1) / 2
	}

	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
}
