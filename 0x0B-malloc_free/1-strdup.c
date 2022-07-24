#include "main.h"
#include <stdlib>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: A pointer to the array
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	while (s[i])
		i++;

	s = malloc(i * sizeof(*s) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++
	}
	s[j] = '\0';

	return (s);
}
