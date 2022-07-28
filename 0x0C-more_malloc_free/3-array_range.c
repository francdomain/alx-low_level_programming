#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	p = malloc(l * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
