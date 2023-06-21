#include "main.h"
#include <unistd.h>
/**
 * print_sign - prints the sign of a number.
 *
 * @n: check the number
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0.
 *
 */
int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
