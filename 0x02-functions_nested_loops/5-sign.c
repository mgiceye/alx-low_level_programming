#include "main.h"
/**
 * print_sign - this function prints the
 * sign of a number.
 * @n: check n.
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else (n < 0)
	{
		_putchar(-1);
		return (-1);
	}
}
