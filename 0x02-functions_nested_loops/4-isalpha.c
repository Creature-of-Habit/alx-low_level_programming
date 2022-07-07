#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if  character is an alphabet. 0 otherwise
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;

	return (result);
}
