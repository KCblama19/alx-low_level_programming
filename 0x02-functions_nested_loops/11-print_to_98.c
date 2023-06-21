#include <stdio.h>
/**
 * print_to_98 - print natural numbers.
 *
 * @n: hold a integer value.
 *
 * Return: 0 on success
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
