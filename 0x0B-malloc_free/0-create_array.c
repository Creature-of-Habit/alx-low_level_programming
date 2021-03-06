#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creayes an array of chars,
 * and initializes it with  specific char.
 * @size: size of the array
 * @c: char to be used for initialization
 *
 * Return: NULL if size is 0 or fails,
 * pointer to the array if sucess
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
