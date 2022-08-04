#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - funtion that performs addition
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */

int op_add(int a, int b)
{
	return(a + b);

}

/**
 * op_sub - funtion that performs subtration
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtion that performs multiplication
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- funtion that performs division
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b)
}

/**
 * op_mod - funtion that performs modulo operation
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b)
}
