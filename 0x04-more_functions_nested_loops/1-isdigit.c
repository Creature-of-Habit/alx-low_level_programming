#include "main.h"

/**
 * _isdigit - checks if input is a digit between 0 and 9
 * @c: value to be checked.
 *
 * Return: 1 if value is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	int result = 0;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}

	return (result);
}
