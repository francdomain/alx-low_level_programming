#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 *@k: string parameter
 * Return: k
 */

char *string_toupper(char *k)
{
	int i;

	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] >= 97 && k[i] <= 123)
		{
			k[i] = k[i] - 32;
		}
	}
	return (k);
}
