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
	int digits1, digits2, digits3;

	for (digits1 = 0; digits1 <= 9; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 <= 9; digits2++)
		{
			for (digits3 = digits2 + 1; digits3 <= 9; digits3++)
			{
				putchar(digits1 + '0');
				putchar(digits2 + '0');
				putchar(digits3 + '0');

				if (digits1 != 7 || digits2 != 8 || digits3 != 9)
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
