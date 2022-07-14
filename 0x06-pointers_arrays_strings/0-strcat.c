#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
