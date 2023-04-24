#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - .
 *@argc: arguments counter.
 *@argv: array of arguments.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				_putchar("Error\n");
				return (1);
			}
			else
			{
				sum = sum + argv[i];
			}
		}
	}
	_putchar("%d\n", sum);
	return (0);
}
