#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	while (dest[n] != '\0')
		n++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
	}
	return (dest)
}
