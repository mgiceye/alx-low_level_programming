#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicate string.
 *@str: string.
 *Return: duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(strlrn(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	free(str);
	return (ptr);
}
