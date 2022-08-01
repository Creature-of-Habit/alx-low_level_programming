#include <stdio.h>

#define UNUSED  (__attribute__((unused)))

/**
 * main - Prints the name of the file it was compiled from, followed by a new line.
 * @argc: number of input arguments
 * @argv: input arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc UNUSED, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
