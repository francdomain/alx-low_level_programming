#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
