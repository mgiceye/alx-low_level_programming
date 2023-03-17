#include <unistd.h>
/**
 * main - print quote
 * Description: program prints quote for Dora Korpar.
 * Return: 1
 */

int main(void) 
{
       	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
