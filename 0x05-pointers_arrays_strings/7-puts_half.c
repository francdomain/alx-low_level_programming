#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: the string involved
 */

void puts_half(char *str)
{
	int i, n;

	n = (strlen(str) - 1) / 2;
	for (; i <= n; i--)
		_putchar(str[i]);

	_putchar('\n');
}
