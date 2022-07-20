#include "main.h"

int prime_check(int, int);

/**
 * is_prime_number - function that returns 1 if prime, else 0
 * @n: number to be checked
 * Return: integer
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
 * prime_check - checks for prime numbers
 * @n: number to be cheked
 * @i: iterator
 * Return: integer
 */

int prime_check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (prime_check(n, n + 1));
}
