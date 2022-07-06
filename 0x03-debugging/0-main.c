#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - Test for positive or negative integer of i
* main - Entry point
* @i: integer to be used for test
* Return: 0
*/

void positive_or_negative(int i)
{
int n;
srand(time(0));
n = i;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
