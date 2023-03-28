#include "main.h"

/**
 * swap_int - swaps the values
 * of two integers.
 * @a: int.
 * @b: int.
 * Return:0.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
