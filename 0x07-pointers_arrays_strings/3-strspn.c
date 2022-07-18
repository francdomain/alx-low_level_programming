#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: source parameter
 * Return: number of bytes in initial s which is accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = strspn(s, accept);

	return (n);
}
