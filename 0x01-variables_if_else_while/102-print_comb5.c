#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		int k;

		for (k = i + 1; k < 100; k++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
