#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from, followed by a new line.
 * @argc: number of input arguments
 * @argv: input arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
