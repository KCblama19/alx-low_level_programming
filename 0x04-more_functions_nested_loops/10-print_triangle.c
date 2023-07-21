#include <stdio.h>
#include <main.h>

/**
 * print_triangle - print a triangle
 *
 * @size: take a integer
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size == 0)
	{
		_putcar('n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
		_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	return (0);
