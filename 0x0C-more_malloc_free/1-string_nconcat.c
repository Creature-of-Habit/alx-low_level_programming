#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * @n: number of bytes of s2 to be concatenated.
 *
 * Return: pointer to newly allocated space containing s1, followed ny the first
 * n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mryspc;
	unsigned int len , k, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;	
	if (n >= j++)
	       	len = i + j;
	else 
		len = i + n;

	mryspc = malloc(sizeof(*mryspc) * (len + 1));
	if (mryspc == NULL)
		re7turn(NULL);
	for (k = 0; k <= i; k++)
		mryspc[k] = s1[k];
	for (k = 0; k < n; k++)
	{
		mryspc[i + 1] = s2[k];
		i++;
	}

	mryspc[len] = 0;

	return (mryspc);
}
