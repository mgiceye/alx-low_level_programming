#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator -function that executes a
 *function given as a parameter
 *each element of an array.
 *
 * @array: pointer to int
 *@size: size of the array
 * @action: pointer to the function
 *Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
