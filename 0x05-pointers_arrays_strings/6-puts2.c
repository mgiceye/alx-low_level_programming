#include "main.h"

/**
 * puts2 - function that prints
 * every other character of a string,
 * starting with the first character.
 * @str: string
 * Return: string
 */
void puts2(char *str)
{
	int len = 0;
	int w = 0;
	char *i = str;
	int q;

	while (*i != '\0')
	{
		i++;
		len++;
	}
	w = len - 1;
	for (q = 0; q <= w; q++)
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');
}
