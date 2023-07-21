#include <stdio.h>
#include "main.h"

void print_square(int size);
/**
 * print_square - print a square
 *
 * @size: take a int argument
 *
 * Return: 0(Success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}


	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
