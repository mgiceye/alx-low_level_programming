#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}

	return (s);
}
