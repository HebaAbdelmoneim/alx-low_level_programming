#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: integer1
 * @b: integer2
 *
 * Return: integer sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: integer1
 * @b: integer2
 *
 * Return: integer sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication two numbers
 * @a: integer1
 * @b: integer2
 *
 * Return: integer mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two numbers
 * @a: integer1
 * @b: integer2
 *
 * Return: integer div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - mod two numbers
 * @a: integer1
 * @b: integer2
 *
 * Return: integer mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
