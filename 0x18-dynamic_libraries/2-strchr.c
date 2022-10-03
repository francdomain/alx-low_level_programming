#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: a string
 * @c: a character
 * Return: pointer to first occurrence of c or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
