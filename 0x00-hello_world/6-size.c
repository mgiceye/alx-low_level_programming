#include <stdio.h>
/**
 * main - print size of various types
 * 
 * Description: program prints size of various types on the computer.
 * Return: 0
 */
int main(void)
{
	char m;
	int a;
	long int g;
	long long int i;
	float c;

	printf("Size of a char: %c byte(s)\n", sizeof(m));
	printf("Size of an int: %i byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(g));
	printf("Size of a long lang int: %llu byte(s)\n", sizeof(i));
	printf("Size of a float: %f byte(s)\n", sizeof(c));
	return (0);
}
