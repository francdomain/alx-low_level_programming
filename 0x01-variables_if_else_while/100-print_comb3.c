#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
int i, j, k;

i = 0;
while (i < 100)
{
	j = i % 10;
	k = i / 10;
	if (k < )
	{
	putchar(j + '0');
	putchar(k + '0');
	
	if (i < 89)
	{
		putchar(44);
		putchar(32);
	}
	}
	i++;
}
putchar('\n');
return (0);
}
