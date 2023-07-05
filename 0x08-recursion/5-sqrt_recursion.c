#include "main.h"

/**
 * sqrt_check - Helper function to recursively check for the square root.
 * @n: The number for which to find the square root.
 * @num: The current number to check as a possible square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int sqrt_check(int n, int num)
{
	if (num * num == n)
		return num;

	if (num * num > n)
		return -1;

	return sqrt_check(n, num + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return sqrt_check(n, 0);
}
