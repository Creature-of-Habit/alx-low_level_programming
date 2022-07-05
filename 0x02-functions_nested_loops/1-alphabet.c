#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char i;
	
	for( i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

}
