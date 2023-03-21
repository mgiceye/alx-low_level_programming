#include "main.h"

/**
 *print_alphabet - this program prints the alphabet,
 *in lowercase.
 *Return: void
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
