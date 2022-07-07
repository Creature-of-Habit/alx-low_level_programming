#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if ((c >= 'A') || (c <= 'Z'))
		result = 1;

	return (result);
}
