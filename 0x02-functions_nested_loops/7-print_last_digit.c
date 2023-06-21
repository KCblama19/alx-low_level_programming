#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number.
 *
 * @int: store a integer value
 *
 * Return: value of the last digit.
 *
 */
int print_last_digit(int);

int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
	{
		num *= -1;
	}

	_putchar(num + '0');

	return (num);
}
