#include "main.h"

/**
 * print_alphabet - this program print 
 * alphabet in lowercase.
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letters;
	for (letters = 'a'; letters <= 'z'; letters++);
	{
		_putchar(letters);
	}
	_putchar('\n');
}
