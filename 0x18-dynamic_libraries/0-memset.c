#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: a string
 * @b: a character
 * @n: an integer
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;

	return (s);
}
