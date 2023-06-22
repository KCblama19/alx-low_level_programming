#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * return: void
 */
void print_numbers(void);

void print_numbers(void)
{
	char  number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
