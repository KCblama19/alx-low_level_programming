#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print n times table
 *
 * @n: holds an integer value
 *
 * Return: Always 0
 */
void print_times_table(int n);

void print_times_table(int n)
{
	int row;
	int col;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int product = row * col;

			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');

			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
