#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: one of strings to be concatenated
 * @s2: the other string to be joined
 *
 * Return: NULL on failure, pointer to newly allocated space in memory
 * containing s1 and s2 contents
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] || s2[len])
		len++;
	strcat = malloc(len * sizeof(char));

	if (strcat == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		strcat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strcat[i++] = s2[j];
	}

	return (strcat);
}
