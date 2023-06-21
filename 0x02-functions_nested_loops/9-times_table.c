#include <stdio.h>
/**
 * times_table - prints the times table from 0 - 9
 *
 * @void: empty argument.
 *
 * Return: void
 *
 */
void times_table(void);

void times_table(void)
{
	int x9row;
	int x9col;

	for (x9row = 0; x9row <= 9; x9row++)
	{
		for (x9col = 0; x9col <= 9; x9col++)
		{
			int result = x9row * x9col;

			printf("%2d", result);

			if (x9col != 9)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
}
