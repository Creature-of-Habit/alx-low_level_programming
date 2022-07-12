#include "main.h"

/**
 * rev_string - array that prints string in reverse
 * @s: pointer with address of string to be reversed
 *
 */

void rev_string(char *s)
{
	int i;

	int len = 0;

	while (1)
	{
		if (s == '\0')
		{
			break;
		}
		else
		{
			len++;
		}
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
