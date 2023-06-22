#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns
 *sum of all its parameters.
 *@n: int
 *Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int total = 0;
	int call;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (counter = 0; counter < n; counter++)
	{
		call = va_arg(args, int);

		total = call + total;
	}
	va_end(args);

	return (total);
}
