#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int digits1, digits2;

	for (digits1 = 0; digits1 <= 9; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 <= 9; digits2++)
		{
			if (digits1 != digits2)
			{
				putchar(digits1 + '0');
				putchar(digits2 + '0');

				if (digits1 != 8 || digits2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
