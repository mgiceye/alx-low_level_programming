#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: string.
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	_print_rev_recursions(s + 1);
	_putchar(*s);
}
