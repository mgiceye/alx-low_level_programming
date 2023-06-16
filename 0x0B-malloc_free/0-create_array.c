#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';
	return (ptr);
}
