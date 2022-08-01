#include <stdio.h>

#define UNUSED  __attribute__((unused))

/**
 * main - Prints the name of the file it was compiled from, followed by a new line.
 * @ac: number of input arguments
 * @av: input arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(int ac UNUSED, char *av)
{
	printf("%s\n", av[0]);

	Return (0);
}
