#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that
 *concatenates two strings.
 *@s1: char.
 *@s2: char.
 * Return: concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_concat;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	ptr_concat = malloc(strlen(s1 + s2) + 1);
	if (ptr_concat == 0)
	{
		return (NULL);
	}
	return (ptr_concat);
}
