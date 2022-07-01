#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description:last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int z;

srand(time(0));
n = rand() - RAND_MAX / 2;
z = n % 10;

printf("last digit of %d is ", n);
if (z > 5)
{
	printf("greater than 5");
}
if (z == 0)
{
	printf("0");
}
if (z < 6 && z != 0)
{
	printf("less than 6 not 0");
}
printf("\n");
return (0);
}
