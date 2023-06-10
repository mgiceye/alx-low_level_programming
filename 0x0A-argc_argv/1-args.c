#include <stdio.h>
#include "main.h"

/**
 *main - a program that prints the number
 *of arguments passed into it.
 *@argc: argument counter.
 *@argv: array name
 *
 * Return: number of arguments.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
