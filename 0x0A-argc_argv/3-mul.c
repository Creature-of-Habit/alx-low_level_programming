#include <stdio.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of arguments 
 * @argv: input arguments
 * Return: 0 if two arguments are inputed, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) *  atoi(argv[2])));
	return (0);
}
