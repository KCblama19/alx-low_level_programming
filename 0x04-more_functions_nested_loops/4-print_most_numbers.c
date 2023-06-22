#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 *
 * @void: return empty value
 */
void print_most_numbers(void);

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		if ( numbers != 2 && numbers != 4 )
		{
			putchar(numbers + '0');
		}
	}

	putchar('\n');
}
