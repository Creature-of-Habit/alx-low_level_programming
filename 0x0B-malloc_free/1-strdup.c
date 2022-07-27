#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space which contains a copy of the string given as a parameter
 * @str: pointer to char of variable to be copied
 * 
 * Return: pointer to string which is a copy of str,
 * NULL if insufficient memory
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *msp;
	int len = 0;

	while (str != '\0')
	{
		len++;
		*++str;
	}
	msp = malloc((len + 1) * sizeof(char));

	if (msp == NULL)
		return (NULL);

	while (str != '\0')
	{
		*msp = *str;
		*++msp;
		*++str;
	}
	msp[len] = '\0';

	return (msp);

}
