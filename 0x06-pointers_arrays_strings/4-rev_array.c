#include "main.h"

/**
 * reverse_array - function that reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int q;

	for (i = 0; i < (n / 2); i++)
	{
		q = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = q;
	}
}
