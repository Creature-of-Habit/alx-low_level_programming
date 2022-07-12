#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer with the adress of string input.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int count;

	while (1)
	{
		if (s[count] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
