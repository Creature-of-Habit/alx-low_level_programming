#include "main.h"

/**
 * _islower - checks if character is in lowercase
 * @c: The character to be checked
 *
 * Return: 1 if  character is lowercase. 0 otherwise
 */

int _islower(int c)
{
	int result = 0;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == c)
		result = 1;
	}
	return (result);
}
