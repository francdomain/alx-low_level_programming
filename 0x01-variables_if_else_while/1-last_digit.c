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

if (z > 5)
	printf("Last digit of %d is %d and is greater than 5", n, z);

if (z == 0)
	printf("Last digit of %d is %d and is 0", n, z);

if (z < 6 && z != 0)
	printf("Last digit of %d is % and is less than 6 and not 0", n, z);
printf("\n");
return (0);
}
