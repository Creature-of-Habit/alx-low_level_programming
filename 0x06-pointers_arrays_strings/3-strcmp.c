#include "main.h"

/**
 * _strcmp - works exactly like strcmp
 * @s1: pointer to one of the strings to be compared
 * @s2: pointer to second string to be compared
 *
 * Return: integer from the difference between first char of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = *s1 - *s2;

	return (i);
}
