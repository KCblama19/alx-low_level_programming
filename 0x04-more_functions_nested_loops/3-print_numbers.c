#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers -  print from 0 to 9
 *
 * @void: return empty value
 *
 * Return: void
 */
void print_numbers(void);

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
