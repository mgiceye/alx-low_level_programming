#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input
 * @src: input
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int g;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[m] = src[g];
		m++;
		g++;
	}

	dest[m] = '\0';
	return (dest);
}
