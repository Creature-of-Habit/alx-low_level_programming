#include "main.h"

/**
 * _islower - checks if character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if  character is an alphabet. 0 otherwise
 */

int _islower(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;

	return (result);
}
