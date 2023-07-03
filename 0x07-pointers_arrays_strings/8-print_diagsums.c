#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);

	for (i = 0; i < size; i++)
		sum2 += *(a + i * size + (size - 1 - i));

	putchar(sum1 / 1000 + '0');
	putchar((sum1 / 100) % 10 + '0');
	putchar((sum1 / 10) % 10 + '0');
	putchar(sum1 % 10 + '0');
	putchar(',');
	putchar(' ');
	putchar(sum2 / 1000 + '0');
	putchar((sum2 / 100) % 10 + '0');
	putchar((sum2 / 10) % 10 + '0');
	putchar(sum2 % 10 + '0');
	putchar('\n');
}
