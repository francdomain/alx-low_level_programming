#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - function that Print sum of two diagonals square matrix
  * @a: the matrix
  * @size: size
  * Return: Success
  */
void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += a[(size + 1) * c];
		sum2 += a[(size - 1) * (c + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
