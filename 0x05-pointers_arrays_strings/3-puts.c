#include "main.h"
#include <string.h>

/**
 * _puts - function that prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n);
}
