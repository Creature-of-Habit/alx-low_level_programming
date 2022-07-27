#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: the input arguments
 * Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
