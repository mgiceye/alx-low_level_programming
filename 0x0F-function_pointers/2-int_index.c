#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index -  function that searches
 *for an integer.
 * @array: pointer to int
 *@size: size of the array
 * @cmp: pointer to the function
 *Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
	{
		return (-1);
	}

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter] != 0))
			return (counter);
	}
	return (-1);
}
