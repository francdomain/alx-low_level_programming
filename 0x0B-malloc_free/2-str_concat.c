#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the newly formed string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}

	return (s);
}
