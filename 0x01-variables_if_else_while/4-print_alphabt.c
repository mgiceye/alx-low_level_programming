#include <stdio.h>

/**
*main- print alphabet
*Description: prints the alphabet in lowercase exept q,e
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
{
putchar('\n');
}
return (0);
}
