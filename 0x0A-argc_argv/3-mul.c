#include <stdio.h>
#include "main.h"

/**
 * main -  program that multiplies two numbers.
 *@argc: arguments counter
 *@argv: array of arguments.
 *Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
