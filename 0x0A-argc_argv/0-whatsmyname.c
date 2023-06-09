#include "main.h"
#include <stdio.h>

/**
*main - a program that prints its name.
*@argv: argument passed.
*@argc: argument counter.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
