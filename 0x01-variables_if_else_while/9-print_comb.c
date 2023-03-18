#include <stdio.h>

/**
*main- print alphabet
*Description: prints the alphabet in lowercase exept q,e
*Return: 0
*/
int main(void)
{
int m;

for (m = 48; m<= 57; m++)
{
putchar(m);
if (m != 57)
{
putchar(',');
putchar(' ');
}
}
{
putchar('\n');
return (0);
}
}
