#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings and
 * use n bytes form src.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: pointer to result
 */

char *_strncat(char *dest, char *src, int n)
{
	_strncat(*dest, *src, n);

	return (dest);
}
