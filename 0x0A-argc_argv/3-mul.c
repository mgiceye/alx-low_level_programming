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
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
