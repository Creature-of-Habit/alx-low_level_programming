#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int singledgt;

	for (singledgt = 0; singledgt < 10; singledgt++)
		putchar((singledgt % 10) + '0');

	putchar('\n');

	return (0);
}
