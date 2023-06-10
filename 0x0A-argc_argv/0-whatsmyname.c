#include "main.h"
#include <stdio.h>

/**
*main - a program that prints its name.
*@argv: argument passed.
*@argc: argument counter.
* Return: 0.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
