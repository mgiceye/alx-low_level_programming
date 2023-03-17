#include <stdio.h>
/**
 * main - print size of various types
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

	printf("Size of a char: %u byte(s)\n", sizeof(m));
        printf("Size of an int: %u byte(s)\n", sizeof(a));
        printf("Size of a long int: %u byte(s)\n", sizeof(g));
        printf("Size of a long lang int: %u byte(s)\n", sizeof(i));
        printf("Size of a float: %u byte(s)\n", sizeof(c));
        return (0);
}
