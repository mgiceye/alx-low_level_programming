#include "main.h"
/**
 *print_rev - reverses a string.
 *@s: string
 *Return:0.
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
