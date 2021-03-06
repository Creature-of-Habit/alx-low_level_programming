#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: input arguments
 * Return: 1 if number contains non digits
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
