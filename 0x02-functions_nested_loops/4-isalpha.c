#include "main.h"

/**
 * _isalpha - this function that checks
 * for alphabetic  character.
 * @c: check c.
 * Return: 1 if c in lowercase,
 * otherwise 0 .
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
