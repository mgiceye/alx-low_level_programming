#include <stdio.h>
#include "main.h"

/**
 *main - a program that prints
 *all arguments it receives
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: recived arguments.
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
