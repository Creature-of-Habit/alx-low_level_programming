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

	for (i = 0; i < 8; i++)
	{
		int k;

		for (k = i + 1; k < 9; k++)
		{
			int j;

			for (j = k + 1; j < 10; j++)
			{
				putchar((i % 10) + '0');
				putchar((k % 10) + '0');
				putchar((j % 10) + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
