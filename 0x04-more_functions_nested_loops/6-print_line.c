#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times underscore is printed
 * Description: use _putchar to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
