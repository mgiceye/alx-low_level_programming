#include "main.h"

/**
 * _islower - this function that checks
 * for lowercase character.
 * @c: check c.
 * Return: 1 if c in lowercase,
 * otherwise 0 .
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
