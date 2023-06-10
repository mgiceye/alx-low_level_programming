#include <stdio.h>
#include <stdlib.h>

/**
 *main - converts a string to an integer
 * @argc: argument counter.
 * @argv: array name.
 *
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		int result = arg1 * arg2;

		printf("%d\n", result);
	}

	return (0);
}
