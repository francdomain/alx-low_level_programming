#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
