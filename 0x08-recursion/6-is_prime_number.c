#include "main.h"

/**
 * check_prime - Helper function to recursively check if a number is prime.
 * @n: The number to check for primality.
 * @div: The divisor to check divisibility.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int check_prime(int n, int div)
{
	if (n <= 1)
		return (0);
	if (n % div == 0 && div < n)
		return (0);
	if (div == n)
		return (1);
	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
