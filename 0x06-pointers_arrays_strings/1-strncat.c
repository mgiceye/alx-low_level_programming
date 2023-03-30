#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: inpu
 * @src: input
 * @n: input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int f;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
	dest[m] = src[f];
	m++;
	f++;
	}
	dest[m] = '\0';
	return (dest);
}
