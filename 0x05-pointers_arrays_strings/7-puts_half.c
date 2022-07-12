#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: the string involved
 */

void puts_half(char *str)
{
	int i, p, q;

	p = strlen(str);
	if (p % 2 == 1)
		q = p / 2 + 1;
	else
		q = p / 2;

	for (i = q; i < p; i++)
		_putchar(str[i]);

	_putchar('\n');
}
