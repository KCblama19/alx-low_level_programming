#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * @void: return empty value
 */
void print_numbers(void);

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}