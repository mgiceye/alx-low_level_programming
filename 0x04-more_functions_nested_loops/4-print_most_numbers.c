#include "main"
/**
 *print_most_numbers - function that prints the
 *numbers, from 0 to 9,
 *followed by a new line.
 *
 *Return: 0.
 */

void print_most_numbers(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		if (!(m == '2' || m == '4'))
			_putchar(m);
	}
	_putchar('\n');
}
