#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 * Return: string pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
