#include "main.h"

/**
 * _islower - checks if character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if  character is an alphabet. 0 otherwise
 */

int _islower(int c)
{
	int result = 0;
	char lower;
	char upper;

	for (lower = 'a', upper = 'A'; lower <= 'z', upper <= 'Z'; lower++, upper++)
	{
		if ((lower == c) || (upper == c))
		result = 1;
	}
	return (result);
}
