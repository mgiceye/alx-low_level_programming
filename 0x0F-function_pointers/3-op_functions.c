#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add function
 * @a: number 1
 * @b: number 2
 *
 *Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - sub function
 * @a: number 1
 * @b: number 2
 *
 *Return: diffrence of 2 numbers
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - mul function
 * @a: number 1
 * @b: number 2
 *
 *Return: product of 2 numbers
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - div function
 * @a: number 1
 * @b: number 2
 *
 *Return: division of 2 numbers
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - mod function.
 * @a: number 1
 * @b: number 2
 *
 *Return: remainder of the division of 2 numbers
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
