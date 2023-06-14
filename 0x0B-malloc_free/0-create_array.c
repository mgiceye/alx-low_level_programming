#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int *ptr;
	int i;

	ptr = malloc(sizeof(c) * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (0);
}
