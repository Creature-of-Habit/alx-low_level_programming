#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the arguments themselves
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *New_str;
	int arg, byte, index, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	New_str = malloc(size * sizeof(char));
	if (New_str == NULL)
		return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			New_str[index++] = av[arg][byte];
		New_str[index++] = '\n';
	}
	return (New_str);
}
