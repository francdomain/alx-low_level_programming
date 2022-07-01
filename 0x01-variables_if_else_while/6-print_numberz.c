#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
putchar('\n');
return (0);
}
