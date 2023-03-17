#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- print the last digit
 *Description: prints the last digit of the number stored in the variable n
 *Return: 0
 *
 */
int main(void)
{
int n;
int last_digt;

srand(time(0));
n = rand() - RAND_MAX / 2;
        /* your code goes there */
last_digt = n % 10;
if (last_digt > 5)
{
   printf("Last digit of %i is %i and is greater than 5\n", n , last_digt);
}
else if (last_digt == 0)
{
   printf("Last digit of %i is %i and is 0\n", n , last_digt);
}
else
{
   printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digt);
}
return (0);
}
