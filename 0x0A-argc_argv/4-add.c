#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main -program that adds positive numbers.
*@argc: argument counter.
*@argv: array name
* Return: sum of numbers.
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
char *arg = argv[i];
while (*arg != '\0')
{
if (!isdigit(*arg))
{
printf("Error\n");
return (1);
}
arg++;
}
sum = sum + num;
}
printf("%d\n", sum);
return (0);
}
