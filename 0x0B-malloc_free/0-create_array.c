#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: length of array s
 * @c: sting character
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
