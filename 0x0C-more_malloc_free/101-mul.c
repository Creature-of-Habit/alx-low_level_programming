#include <stdio.h>

/**
 * main - program that multiplies two positive numbers
 * @ac: number of arguments
 * @av: the input arguments
 *
 * Return: Error if ac < 3 or if arguments are not digits
 */

int main(int ac, char *av[])
{
	if (ac < 3)
	{
		printf("Error\n");
		exit(98);
	}
}
