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
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr_concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr_concat == NULL)
	{
		return (NULL);
	}
	return (ptr_concat);
}
