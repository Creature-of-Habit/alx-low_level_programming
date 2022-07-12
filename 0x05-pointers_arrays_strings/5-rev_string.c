#include "main.h"

/**
 * rev_string - array that prints string in reverse
 * @s: pointer with address of string to be reversed
 *
 */

void rev_string(char *s)
{
	int i, j;

	j = 0;

	while (1)
	{
		if (s[j] == '\0')
		{
			break;
		}
		else
		{
			j++;
		}
	}
	for (i = (j - 1); i > -1; i--)
	{
		_putchar(s[i]);
	}
}
