#include "main.h"

/**
 * _puts_recursion - function that prints a string.
 * @s: char.
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
